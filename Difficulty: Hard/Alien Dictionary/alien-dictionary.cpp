class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        set<char> chars;
          for(auto &w : words)
            for(char c : w)
                chars.insert(c);
    
        vector<vector<int>> adj(26);
        vector<int> indegree(26, 0);
    
        for(int i = 0; i < words.size() - 1; i++){
            string &s1 = words[i];
            string &s2 = words[i + 1];
            int len = min(s1.size(), s2.size());
    
            bool diffFound = false;
            for(int j = 0; j < len; j++){
                if(s1[j] != s2[j]){
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    indegree[s2[j] - 'a']++;
                    diffFound = true;
                    break;
                }
            }
    
            // prefix invalid case
            if(!diffFound && s1.size() > s2.size())
                return "";
        }
    
        queue<int> q;
        
        for(char c : chars){
            if(indegree[c - 'a'] == 0)
                q.push(c - 'a');
        }
    
        string ans = "";
    
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node + 'a');
    
            for(int nei : adj[node]){
                indegree[nei]--;
                if(indegree[nei] == 0)
                    q.push(nei);
            }
        }
    
        return ans.size() == chars.size() ? ans : "";
    }
};