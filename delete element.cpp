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
	
	int Delete(int position);
	

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

//Deleete element inside linked List
int LinkedList::Delete(int position) {
	int x = 0, i;
	Node* p = first;
	if (position == 1) {
		x = p->data;
		p = first;
		first->next;
	}
	else {
		Node* q=NULL;
		for (i = 0;i < position - 1;i++) {
			q = p;
			p = p->next;
		}
		if (p) {
			x = p->data;
			q->next = p->next;
			delete p;
		}
	}
	return x;
}





int main() {
	int A[] = { 1,2,3,4,5 };

	LinkedList l(A, 5);
	
	cout << l.Delete(2)<<"\n";
	l.Display();

	
	
}


//time complexity 
//min-O(1)
//max(n)