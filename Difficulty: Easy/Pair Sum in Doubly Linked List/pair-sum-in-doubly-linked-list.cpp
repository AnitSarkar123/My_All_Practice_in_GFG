// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        Node*tail =head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        vector<pair<int,int>>ans;
        while(head->data<tail->data){
            int sum=head->data+tail->data;
            if(sum==target){
                ans.push_back({head->data, tail->data});
                head=head->next;
                tail=tail->prev;
            }else if(sum>target){
                tail=tail->prev;
            }else{
                head=head->next;
            }
        }
        return ans;
    }
};