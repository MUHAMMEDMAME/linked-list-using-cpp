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
	
	bool isSorted();
	

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

//check if is linked list is sorted
bool LinkedList::isSorted() {
	Node* p = first;
	int x = INT_MIN;
	while (p) {
		if (x > p->data)
			return false;

		x = p->data;
		p = p->next;

		
	}
	return true;
}






int main() {
	int A[] = { 1,2,3,4,5 };

	LinkedList l(A, 5);
	
	if (l.isSorted())
		cout << "it is sorted\n";
	else
		cout << "it isn't sorted\n ";
	l.Display();

	
	
}


//time complexity 
//min-O(1)
//max(n)