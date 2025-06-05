class Solution {
  public:
  int findParent(int node,vector<int>&parent){
        if(node==parent[node]){
            return parent[node];
        }
        return parent[node]=findParent(parent[node],parent);
    }
    void unionByRank(int u,int v,vector<int>&rank,vector<int>&parent){
        int pu=findParent(u,parent);
        int pv=findParent(v,parent);
        if(rank[pu]>rank[pv]){
            parent[pv]=pu;
        }
        else if(rank[pv]>rank[pu]){
            parent[pu]=pv;
        }
        else{
            parent[pu]=pv;
            rank[pv]++;
        }
    } 
    void unionBySize(int u,int v,vector<int>&size,vector<int>&parent){
        int pu=findParent(u,parent);
        int pv=findParent(v,parent);
        if(size[pu]>size[pv]){
            parent[pv]=pu;
        }
        else if(size[pv]>size[pu]){
            parent[pu]=pv;
        }
        else{
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
    }
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
           vector<int>parent(V,0);
        vector<int>size(V,1);
        int ans=0;
        for(int i=0;i<V;i++){
            parent[i]=i;
        }
        vector<vector<int>>temp;
        for(int i=0;i<V;i++){
            for(auto y:adj[i]){
                temp.push_back({y[1],i,y[0]});//{weight, vertex1, vertex2}
            }
        }
        /*
        1. while (!s.empty()) {
Purpose: This loop runs until the set s (which contains edges sorted by weight) becomes empty.
Logic: Each iteration processes one edge from the set s.
2. auto it = s.begin();
Purpose: Get an iterator pointing to the first (smallest) element in the set s.
Logic: Since s is a std::set, it automatically keeps its elements sorted. The first element is the edge with the smallest weight.
3. auto x = *it;
Purpose: Dereference the iterator to retrieve the edge stored at it.
Logic: Each edge is represented as a vector in the format {weight, vertex1, vertex2}.
4. s.erase(it);
Purpose: Remove the processed edge (the one pointed to by it) from the set s.
Logic: This ensures that the edge is not processed again in future iterations.
5. int w = x[0], p = x[1], node = x[2];
Purpose: Extract the components of the edge for easier access.
Logic:
w: The weight of the edge.
p: One endpoint of the edge (vertex).
node: The other endpoint of the edge (vertex).
6. if (findParent(p, parent) != findParent(node, parent)) {
Purpose: Check if the two endpoints of the edge belong to different sets (i.e., they are not yet connected in the MST).
Logic:
findParent(p, parent) returns the representative (parent) of the set containing p.
findParent(node, parent) returns the representative (parent) of the set containing node.
If the two parents are different, adding this edge to the MST will not form a cycle.

        */
        set<vector<int>>s(begin(temp),end(temp));
        while(!s.empty()){
            auto it=s.begin();
            auto x=*it;
            s.erase(it);
            int w=x[0],p=x[1],node=x[2];
            if(findParent(p,parent)!=findParent(node,parent)){
                ans+=w;
                unionBySize(p,node,size,parent);
            }
        }
        return ans;
    }
};