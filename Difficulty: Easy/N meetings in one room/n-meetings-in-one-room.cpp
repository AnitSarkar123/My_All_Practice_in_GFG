class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.second<b.second){
            return true;
        }
        return false;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n=start.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            pair<int,int>p=make_pair(start[i],end[i]);
            v.push_back(p);
    
        }
        sort(v.begin(),v.end(),cmp);
        int count=1;
        int endm=v[0].second;
        for(int i=0;i<n;i++){
            if(endm<v[i].first){
                count++;
                endm=v[i].second;
            }
            
        }
        return count;
    }
};