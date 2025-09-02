class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0;i<val.size();i++)
        {
            pq.push({(double)val[i]/wt[i],{val[i],wt[i]}});
        }
        double count = 0;
        
        while(capacity>0 && !pq.empty())
        {
            pair<double,pair<int,int>>temp = pq.top();
            pq.pop();
            
            double per = temp.first;
            int val1 = temp.second.first;
            int wt1 = temp.second.second;
            
            if(capacity>=wt1)
            {
                count+=val1;
                capacity-=wt1;
            }
            else
            {
                count+=per*capacity;
                capacity=0;
            }
        }
        
        return count;
        
    }
};
