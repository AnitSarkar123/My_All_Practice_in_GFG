class Solution {
public:
    void dfs(int i, vector<vector<int>>& adj, vector<int>& temp, unordered_map<int, bool>& visited) {
        visited[i] = 1;
        temp.push_back(i);
        for (auto z : adj[i]) {
            if (!visited[z]) {
                dfs(z, adj, temp, visited);
            }
        }
    }

    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>> ans;
        unordered_map<int, bool> visited;
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                vector<int> temp;
                dfs(i, adj, temp, visited);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};