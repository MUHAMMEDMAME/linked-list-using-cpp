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
	int sum();
	int Rsum(Node* p);

	

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

//sum data inside node
int LinkedList::sum() {
	Node* p = first;
	int sum = 0;
	while (p != NULL) {
		sum += p->data;
		p = p->next;
	}
	return sum;
}

//sum data inside Node using by recursion
int LinkedList::Rsum(Node* p) {
	if (p != NULL) {
		return Rsum(p->next) + p->data;
	}
	return 0;
}


int main() {
	int A[] = { 1,2,3,4,5 };
	LinkedList l(A, 5);
	cout << "Sum is:" << l.Rsum(first);

	
	
}