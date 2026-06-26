class Solution {
  public:
    bool check(string &s2, string &s, int ind){
      int j=0;
      for(int i=ind; i<s.size(); i++){
          if(s[i]==s2[j]) j++; 
      }
      return j==s2.size();
  }
    string minWindow(string& s1, string& s2) {
        if(s2.size()>s1.size()) return ""; 
        int mini=1e9; int i=0; int k=0; string s="";
        for(int j=0; j<s1.size(); j++){
            s=s+s1[j]; 
            if(s.size()>=s2.size()){
            while(check(s2, s, i)){
                if(mini>j-i+1){
                    k=i; mini=j-i+1;
        
                }
                i++; 
            }
        }
        }
        if(mini==1e9) return ""; 
        string ans=""; 
        ans=s1.substr(k, mini); 
        return ans;
    }
};
