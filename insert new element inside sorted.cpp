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
	
	void insertSorted(int x);
	

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



void LinkedList::insertSorted(int x) {
	Node* p = first;
	Node* t = new Node;
	t->data = x;
	t->next = NULL;
	if (first == NULL)
	{
		first = t;
	
	}
	else {
		Node* q = NULL;
		while (p && p->data < x) {
			q = p;
			p = p->next;
		}
		if (first == p) {
			t->next = first;
			first = t;
		}
		else {
			t->next = q->next;
			q->next = t;
		}
	}
}




int main() {
	int A[] = { 1,2,3,4,5 };

	LinkedList l(A, 5);
	l.insertSorted(2);
	l.Display();

	
	
}


//time complexity 
//min-O(1)
//max(n)