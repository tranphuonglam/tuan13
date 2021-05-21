#include<iostream>
#include<cstring>
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
	void removeFirst();
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
	
	for (Node *p = head; p != NULL; p = p->next) 
    cout << p->element<<".";
}
char* deleted(const char*a)
{
	int n = strlen(a);
	char *p = new char;
	for(int i=0;i<n;i++) {
		*(p+i) = *a;
		a++;
	}
	*(p+n) = '\0';
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		*(p+j) = *(p+j+1);
		n--;
	}
	return p;
}
void SLink::removeFirst()
{
		for (Node *p = head; p != NULL; p = p->next) 
		{
		deleted(p->element);
		cout<<p->element;
		}
}

int main()
{
	SLink list;
	list.addfirst("Tran");
	list.addfirst("Phuong");
	list.removeFirst();
	cout<< deleted("Lam");
	return 0;
}
