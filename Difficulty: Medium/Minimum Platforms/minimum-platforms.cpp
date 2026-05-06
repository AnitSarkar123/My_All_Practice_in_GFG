class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
           vector<pair<int,int>> v;
        for(int i = 0;i<arr.size();i++){
            v.push_back({arr[i],dep[i]});
        }
        sort(v.begin(),v.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(v[0].second);
        int cnt = 1;
        for(int i = 1;i<v.size();i++){
            if(v[i].first > pq.top()){
                pq.pop();
                pq.push(v[i].second);
            }
            else{
                cnt++;
                pq.push(v[i].second);
            }
        }
        return cnt;
    }
};
