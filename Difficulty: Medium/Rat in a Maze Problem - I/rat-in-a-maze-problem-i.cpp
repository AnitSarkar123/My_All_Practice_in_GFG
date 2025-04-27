//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  bool isSafe(int newX, int newY, vector<vector<bool>>& visited, 
            vector<vector<int>>& maze, int n) 
        {
            if( (newX >= 0 && newX < n) && (newY >= 0 && newY < n) && 
                (visited[newX][newY] == 0) && (maze[newX][newY] == 1) ) 
            {
                return true;
            }
            else 
                return false;
        }
   void solve(int x, int y, vector<vector<int>>& maze, int n, 
            vector<vector<bool>>& visited, string path, vector<string>& ans){
       if(x==n-1 && y==n-1){
           ans.push_back(path);
       }
       //Down
       visited[x][y] = 1;

            //Down
            if(isSafe(x+1, y, visited, maze, n)) {
                //recursive call
                solve(x+1, y, maze, n, visited, path + 'D', ans);
            }

            //Left
            if(isSafe(x, y-1, visited, maze, n)) {
                solve(x, y-1, maze, n, visited, path + 'L', ans);
            }

            //Right
            if(isSafe(x, y+1, visited, maze, n)) {
                //recursive call
                solve(x, y+1, maze, n, visited, path + 'R', ans);
            }

            //Up
            if(isSafe(x-1, y, visited, maze, n)) {
                //recursive call
                solve(x-1, y, maze, n, visited, path + 'U', ans);   
            }
            visited[x][y]=0;
   }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        vector<string>ans;
        string path ="";
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        if(maze[0][0]==0){
            return ans;
        }
        solve(0, 0, maze, n, visited, path, ans);
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        Solution obj;
        vector<string> result = obj.ratInMaze(mat);
        // sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends