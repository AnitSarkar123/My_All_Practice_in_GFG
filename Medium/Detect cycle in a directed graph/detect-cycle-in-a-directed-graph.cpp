//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool CycleDetected(vector<int> adj[],unordered_map<int,bool>&visited,int node,unordered_map<int,bool>&dfsvisited){
        visited[node]=true;
        dfsvisited[node]=true;
        for(auto i:adj[node]){
             if(!visited[i]){
                bool r=CycleDetected(adj,visited,i,dfsvisited);
                if(r){
                    return true;
                }
            }
            else if(dfsvisited[i]){
                return true;
            }
            
           // dfsvisited[node]=false;
            
             
        }
         dfsvisited[node] = false;
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int,bool>visited;
        unordered_map<int,bool>dfsvisited;
        for(int i=0;i<V;i++){
            
            if(!visited[i]){
                bool k=CycleDetected(adj,visited,i,dfsvisited);
                if(k){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends