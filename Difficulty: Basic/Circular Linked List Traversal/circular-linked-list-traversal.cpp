//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int data)
{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; 

    *head_ref = ptr1;
}

void printList(struct Node*);

int main()
{
    int i,n,t,val;
    scanf("%d",&t);

    while(t--)
        {
         struct Node *head = NULL;
         scanf("%d",&n);
         for(i=0;i<n;i++)
          {
            scanf("%d",&val);
            push(&head,val);
          }
         printList(head);
         printf("\n");
        }
    return 0;
}

// } Driver Code Ends


//User function Template for C++

/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  // code here
   if(head==NULL) return;
  struct Node *temp=head;
  
  do{
      cout<<temp->data<<" ";
      temp=temp->next;
  }while(temp!=head);
}
