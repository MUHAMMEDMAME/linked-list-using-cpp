#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
} *first;
class LinkedList {

public:
	LinkedList();
	LinkedList(int A[], int n);
	
	void Display();
	void reversingUsingRecursion(Node* q, Node* p);

	
	
	

};
LinkedList::LinkedList() {
	first = NULL;
}
LinkedList::LinkedList(int A[], int n)
{
	first = new Node;
	Node* t, * last;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for (int i = 1;i < n;i++) {
		t = new Node;
		t->data = A[i];
		last->next = t;
		t->next = NULL;
		last = t;
	}
}
//Display using by while loop
void LinkedList::Display() {
	Node* p = first;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}

//Reversing using sliding
void LinkedList::reversingUsingRecursion(Node*q,Node*p) {
	if (p!=NULL) {
		reversingUsingRecursion(p, p->next);
		p->next = q;
	}
	else
	first = q;
}






int main() {
	int A[] = { 1,2,2,4,5 };
	Node* q = NULL;

	LinkedList l(A, 5);

	l.reversingUsingRecursion(q,first);
	l.Display();

	
	
}


//time O(n)