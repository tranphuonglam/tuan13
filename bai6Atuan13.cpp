#include<iostream>
#include<string>
using namespace std;

struct Node
{
	const char* element;
	Node* next;
    Node(const char* e = NULL, Node* n = NULL)
  {
   element = e;
     next = n;
  }
};
struct SLink
{
	Node* head;
	Node* tail;
	SLink()
	{
		head = NULL;
	}
	void addfirst(const char* s);
	void print();
	const char* remove(Node* p);
};
void SLink::addfirst(const char*s)
{
	Node *newnode = new Node;
	newnode->element = s;
	newnode->next= head;
	head = newnode;
}
void SLink::print()
{
	
	for (Node *p = head; p != NULL; p = p->next) {
    cout << p->element<<".";
}
}
const char* SLink::remove(Node *p)
{
	Node *k = head;
	while(k!=NULL)
	{
		if(k->next = p) {
			k->next = p->next;
			delete p;
		}
		k = k->next;
	}
	return p->element;
}
int main()
{
	Node* head;
	SLink list;
	list.addfirst("Tran");
	list.addfirst("Phuong");
	list.addfirst("Lam");
	cout << list.remove(head);
	return 0;
}
