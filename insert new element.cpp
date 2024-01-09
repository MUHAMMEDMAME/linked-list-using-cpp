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
	
	void insert(int position,int x);
	

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



void LinkedList::insert(int position,int x) {

	Node* t = new Node;
	Node* p = first;
		t->data = x;
	if (position == 0) {
		t->next = first;
		first = t;
	}
	else {
		for (int i = 1;i < position;i++)
			p = p->next;

		t->next = p->next;
		p->next = t;
		
	}
}






int main() {
	int A[] = { 1,2,3,4,5 };
	Node* result;
	LinkedList l(A, 5);
	l.insert(4,3);
	l.Display();

	
	
}