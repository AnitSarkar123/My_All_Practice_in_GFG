/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
    
    private:
    Node*  merge(Node* a,Node* b){
      if(a == NULL) return b;
      if(b == NULL) return a;
      Node* ans = new Node(-1);
       Node* ansRoot = ans;
     
        
      while(a != NULL && b != NULL){
        if(a->data < b->data){
            ans->bottom = a;
            a = a->bottom;
            
        }else{
          
            ans->bottom = b;
            b = b->bottom;
        }  
        ans = ans->bottom;
        ans ->next = NULL;
      }
      
      while(a != NULL){
           ans->bottom = a;
            a = a->bottom;
             ans = ans->bottom;
             ans ->next = NULL;
      }
       while(b != NULL){
         ans->bottom = b;
            b = b->bottom;
             ans = ans->bottom;
             ans ->next = NULL;
      }
      
      return ansRoot->bottom;
  }
    
  public:
    Node *flatten(Node *root) {
        if(root == NULL || root->next == NULL){
            return root;
        }
      root->next = flatten( root->next);
      
      root = merge(root,root->next);
      return root;
        
        
    }
};