/******************************************************************************

created by @AhmetKara
GitHub: https://github.com/ahmetQara

*******************************************************************************/

// C++ implementation of the approach
#include <iostream>
using namespace std;

// Represents node of the linked list
struct Node {
	int data;
	Node* next;
};

// Function to insert a node at the end of the linked list
void insert(Node** head, int item)
{
	Node *ptr = *head, *temp = new Node;
	temp->data = item;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else {
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}

// Function to print the sum of even and odd nodes of the linked lists
void evenOdd(Node* head)
{
	int even = 0, nodeNumber = 0, odd = 0;
	Node* ptr = head;
	
	while (ptr != NULL) {

		// If current node's data is even
		if (ptr->data % 2 == 0)
		{
			even++;
		}

		nodeNumber++;
		// ptr now points to the next node
		ptr = ptr->next;
	}
	odd = nodeNumber - even;
	
	if (even>odd) {cout << 1 << endl;}
	if (odd>even) {cout << -1 << endl;}
	if (even==odd) {cout << 0 << endl;}
}

// Driver code
int main()
{
	Node* head = NULL;
	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 3);
	insert(&head, 4);

	evenOdd(head);

	return 0;
}
