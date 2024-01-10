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
	void reversingUsingArray(int size);

	
	
	

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

//Reversing using Array

void LinkedList::reversingUsingArray(int size) {
	int i=0;
	int* ptr = new int[size];
	Node* p = first;
	while (p != NULL) {
		ptr[i] = p->data;
		p = p->next;
		i++;
	}
	p = first;
	i--;
	while (p != NULL) {
		p->data = ptr[i];
		p = p->next;
		i--;
	}
}






int main() {
	int A[] = { 1,2,2,4,5 };

	LinkedList l(A, 5);

	l.reversingUsingArray(5);
	l.Display();

	
	
}


//time O(n)