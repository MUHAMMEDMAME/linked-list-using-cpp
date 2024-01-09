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
	
	Node* RlinearSearch(Node* p, int key);

	

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



//linear search using by recursion

Node* LinkedList::RlinearSearch(Node* p, int key) {
	if (p != NULL) {
		if (p->data == key)
			return p;
		return RlinearSearch(p->next, key);
	}
	return NULL;
}
	





int main() {
	int A[] = { 1,2,3,4,5 };
	Node* result;
	LinkedList l(A, 5);
	result = l.RlinearSearch(first,3);

	if (result!=NULL)
		cout << "the key is:" << result->data << "\n";
	else
		cout << "key doesn't exist\n";
	
	
}