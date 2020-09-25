// Ki thuat them 1 node p vao sau node q
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* pNext;
};
typedef struct node Node;

struct list
{
	Node* pHead;
	Node* pTail;
};
typedef struct list List;

void khoi_Tao(List& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
Node *khoi_Tao_Node(int x)
{
	Node* p = new Node;
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat";
		return NULL;
	}
	else
	{
		p->data = x; // gan x cho data
		p->pNext = NULL;
	}
	return p;
}

void them_Vao_Dau(List& l, Node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}

void them_Vao_Cuoi(List& l, Node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}








int main()
{

	return 0;
}