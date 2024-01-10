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
	void removeDuplicated();

	
	
	

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

//Remove duplicate element 
void LinkedList::removeDuplicated() {
	Node* p = first;
	Node* q = p->next;
	while (q != NULL) {
		if (p->data != q->data) {
			p = q;
			q = q->next;
		}
		else
		{
			p->next = q->next;
			delete q;
			q = p->next;
		}
	}
}







int main() {
	int A[] = { 1,2,2,4,5 };

	LinkedList l(A, 5);
	
	l.removeDuplicated();

	l.Display();

	
	
}


//time complexity 
//min-O(1)
//max(n)