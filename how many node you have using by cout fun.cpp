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
	int  count();
	int Rcount(Node *p);
	

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
void LinkedList::Display(){
	Node* p = first;
	while (p!=NULL) {
		cout << p->data << " ";
		p = p->next;
}

}

//Display how many Node you have

int LinkedList::count() {
	Node* p = first;
	int count = 0;
	while (p != NULL) {
		count++;
		p = p->next;
	}

	return count;
}

int  LinkedList::Rcount(Node *p) {
	if (p != NULL)
	{
		return Rcount(p->next)+1;
	}
	return 0;
}



int main() {
	int A[] = { 1,2,3,4,5 };
	LinkedList l(A, 5);
	cout << "you have :" << l.Rcount(first)<<" node\n";

	
	
}