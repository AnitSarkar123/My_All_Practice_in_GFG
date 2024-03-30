//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{   
    public:
    
    struct TrieNode {
        struct TrieNode* child[26];
        int wordEnd;
        int cnt;
        TrieNode() {
            for(int i=0; i<26; i++) {
                this->child[i] = nullptr;
            }
            
            this->wordEnd = 0;
            this->cnt = 0;
        }
        
    };
    
    struct Trie {
        TrieNode* root;
        Trie() {
            root = new TrieNode();
        }
        
        void insertNode(string str) {
            TrieNode* temp = root;
            
            for(int i=0; i<str.size(); i++) {
                if(temp->child[str[i] - 'a'] == nullptr) {
                    temp->child[str[i] - 'a'] = new TrieNode();

                }
                temp->cnt++;
                temp = temp->child[str[i] - 'a'];
            }
        }
        
        string checkShortUniquePrefix(string str) {
            string ans = "";
            TrieNode* temp = root;
            
            for(int i=0; i<str.size(); i++) {
                
                if(temp->cnt == 1) break;
                ans += str[i];
                temp = temp->child[str[i] - 'a'];
            }
            
            return ans;
        }
        
    };
    
    vector<string> findPrefixes(string arr[], int n)
    {   
        Trie *T = new Trie();
        for(int i=0; i<n; i++) {
            T->insertNode(arr[i]);
        }
        
        vector<string> ans;
        for(int i=0; i<n; i++) {
            ans.push_back(T->checkShortUniquePrefix(arr[i]));
        }
        
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}

// } Driver Code Ends