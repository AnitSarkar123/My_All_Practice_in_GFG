class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        queue<int>q;
        int n=adj.size();
        vector<int>visited(n,0);
        vector<int>ans;
        visited[0]=1;
        q.push(0);
        while(!q.empty()){
            int node =q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                }
            }
            
        }
        return ans;
        
        
    }
};