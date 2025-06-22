//Position this line where user code will be pasted.
class Solution {
  public:
    
    void dfs(int node, unordered_map<int,bool>& vis, vector<vector<int>> &adj, stack<int>& topo) {
        vis[node] = true;
        for(int nbr : adj[node]) {
            if(!vis[nbr]) {
                dfs(nbr, vis, adj, topo);
            }
        }
        topo.push(node);
    }
    
    void Revdfs(int node, unordered_map<int,bool>& vis, vector<vector<int>> &adj) {
        vis[node] = true;
        for(int nbr : adj[node]) {
            if(!vis[nbr]) {
                Revdfs(nbr, vis, adj);
            }
        }
    }
    
    int kosaraju(vector<vector<int>> &adj) {
        int n = adj.size();
        stack<int> topo;
        unordered_map<int, bool> vis;
        
        // Step 1: Topological Sort
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj, topo);
            }
        }
        
        // Step 2: Transpose Graph
        vector<vector<int>> transpose(n);
        for(int i = 0; i < n; i++) {
            for(int nbr : adj[i]) {
                transpose[nbr].push_back(i);
            }
        }
        
        // Step 3: DFS on Transposed Graph
        for(int i = 0; i < n; i++) {
            vis[i] = false;
        }
        
        int count = 0;
        while(!topo.empty()) {
            int top = topo.top();
            topo.pop();
            if(!vis[top]) {
                count++;
                Revdfs(top, vis, transpose);
            }
        }
        
        return count;
    }
};
