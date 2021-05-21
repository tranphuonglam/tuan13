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
	void removelast();
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
void SLink::removelast()
{
	Node *a = head;
	while(a != NULL)
	{
		if(a->next->next == NULL)
		{
			a->next = NULL;
			tail = a;
		}
		a = a->next;
	}
}
int main()
{
	SLink list;
	list.addfirst("Tran");
	list.addfirst("Phuong");
	list.addfirst("Lam");
	list.removelast();
	list.print();
}
