#include <bits/stdc++.h>
using namespace std;
  
/* a node of the doubly linked list */
class Node 
{ 
    public:
    int data; 
    Node *next; 
    Node *prev; 
     Node(int data){
     	this->next = NULL;
     	 this->prev = NULL;
     	 this->data = data;
	 }
}; 
  
/* A utility function to swap two elements */
void swap ( int* a, int* b ) 
{ int t = *a; *a = *b; *b = t; } 
  
// A utility function to find
// last node of linked list 
Node *lastNode(Node *root) 
{ 
    while (root && root->next) 
        root = root->next; 
    return root; 
} 
  
/* Considers last element as pivot, 
places the pivot element at its 
correct position in sorted array, 
and places all smaller (smaller than 
pivot) to left of pivot and all greater
elements to right of pivot */
Node* partition(Node *l, Node *h) 
{ 

Node* left = l;
Node* right = h;
Node* pivot = l; 


bool flag = false;
while(!flag){
	
	while(left != NULL && left->data <= pivot->data){
		if(left == right){
			flag = true;
		}
		left = left->next;
	}
	
	while(right != NULL && right->data > pivot->data){
		if(right == left){
			flag = true;
		}
		right = right->prev;
	}
	
	if(!flag){
			swap(left->data, right->data);		
	}

	
}
swap(pivot->data, right->data);
return right;




} 
  
/* A recursive implementation 
of quicksort for linked list */
void _quickSort(Node* l, Node *h) 
{ 
    if (h != NULL && l != h && l != h->next) 
    { 
        Node *p = partition(l, h); 
        _quickSort(l, p->prev); 
        _quickSort(p->next, h); 
    } 
} 
  
// The main function to sort a linked list.
// It mainly calls _quickSort() 
void quickSort(Node *head) 
{ 
    // Find last node 
    Node *h = lastNode(head); 
  
    // Call the recursive QuickSort 
    _quickSort(head, h); 
} 
  
// A utility function to print contents of arr 
void printList(Node *head) 
{ 
    while (head) 
    { 
        cout << head->data << " "; 
        head = head->next; 
    } 
    cout << endl; 
} 
  



Node* takeInput(){
	int data;
	 cout<<"enter the data of teh first node "<<endl;
	 cin>>data;
	 
	Node * head  = NULL;
	Node* tail = NULL;
	  
	  while(data != -1){
	  	
	  	Node* newNode = new Node(data);
		
		if(head == NULL){
			head= newNode;
			 tail = newNode;
		}  	
		else{
			tail->next = newNode;
			newNode->prev = tail;
			tail = tail->next;
		}
	  	cout<<"enter tha data till you enter -1 "<<endl;
		  cin>>data; 
	  }
	  return head;
}








/* Driver code */


int main() 
{ 
    Node *head = NULL; 
    head = takeInput();
	
	
	
	//    push(&a, 5); 
//    push(&a, 20); 
//    push(&a, 4); 
//    push(&a, 3); 
//    push(&a, 30); 
  
    cout << "Linked List before sorting \n"; 
    printList(head); 
  
    quickSort(head); 
  
    cout << "Linked List after sorting \n"; 
    printList(head); 
  
    return 0; 
} 