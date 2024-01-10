#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
} *Head;
class LinkedList {

public:
	LinkedList();
	LinkedList(int A[], int n);
	
	void Display();
	void RDisplay(Node *);


	
	
	

};
LinkedList::LinkedList() {
	Head = NULL;
}
LinkedList::LinkedList(int A[], int n)
{
	Head = new Node;
	Node* t, * last;
	Head->data = A[0];
	Head->next = Head;
	last = Head;
	for (int i = 1;i < n;i++) {
		t = new Node;
		t->data = A[i];
		t->next =last->next ;
		last->next = t;
		last = t;
	}
}
//Display 
void LinkedList::Display() {
	Node* h = Head;
	do {
		cout << h->data << " ";
		h = h->next;
	} while (h != Head);
}

//Display using by recursion

void LinkedList::RDisplay(Node* h) {
	
	static int flag = 0;
	if (h != Head || flag == 0) {
		flag = 1;
		cout << h->data<<" ";
		RDisplay(h->next);
	}
}




int main() {
	int A[] = { 1,2,2,4,5 };


	LinkedList l(A, 5);


	l.RDisplay(Head);

	
	
}


//time O(n)