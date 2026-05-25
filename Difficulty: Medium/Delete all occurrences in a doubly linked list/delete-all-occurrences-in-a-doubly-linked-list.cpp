/* a Node of the doubly linked list
class Node {
	public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int x) {
		data = x;
		next = nullptr;
		prev = nullptr;
	}
};
*/

class Solution {
	public:
	
	// Function to delete a specified node from the linked list
	Node* deleteAllOccurOfX(Node* head, int x) {
		
		// code here
		Node*temp = head;
		while (temp != NULL) {
			if (temp->data == x) {
				if (temp == head) {
					head = temp->next;
					
				}
				Node* nextNode = temp->next;
				Node* prevNode = temp->prev;
				
				if (nextNode != NULL)
					nextNode->prev = prevNode;
				
				if (prevNode != NULL)
					prevNode->next = nextNode;
				
				free(temp);
				temp = nextNode;
			}
			else {
				temp = temp->next;
			}
		}
		return head;
		
	}
};
