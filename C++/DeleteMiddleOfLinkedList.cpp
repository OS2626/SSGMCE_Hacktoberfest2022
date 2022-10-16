
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 

Node* deleteMid(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node * slow=head;
    Node* fast=head;
    Node* temp=NULL;
    while(fast!=NULL&& fast->next!=NULL)
    {
       
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=slow->next;
    slow->next=NULL;
    return head;
    
}
//Expected Time Complexity: O(N).
//Expected Auxiliary Space: O(1).
