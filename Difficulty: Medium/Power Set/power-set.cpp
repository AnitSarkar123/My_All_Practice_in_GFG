class Solution {
  public:
    vector<string> AllPossibleStrings(string s) {
        // Code here
        int n=s.size();
        int total=1<<n;
        vector<string>substring;
        for(int mask=1;mask<total;mask++){
            string substr="";
            for(int i=0;i<n;i++){
                if(mask & (1<<i)){
                    substr +=s[i];
                }
            }
            substring.push_back(substr);
            
        }
        sort(substring.begin(), substring.end());
        return substring;
    }
};