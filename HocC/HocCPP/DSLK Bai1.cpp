#include<iostream>
using namespace std;
// Nhap danh sach lien ket don cac so nguyen . Tim max trong danh sach
               // ======================== KHAI BAO DANH SACH LIEN KET DON ==========================//
struct node
{
	int data; // du lieu chua trong 1 cai node.
	struct node* pNext; // Day la con tro, dung de lien ket giua cac node voi nhau. Neu khong co con tro thi se ko lien ket dc cac node ====> kp danh sach lien ket
};
typedef struct node Node;

// khai bao cau truc cua danh sach lien ket don
struct list
{
	Node* phead; // node quan li dau danh sach
	Node* pTail; // node quan li cuoi danh sach
};
typedef struct list List;
				// =================== KHOI TAO =======================//
void khoi_Tao(List& l)
{
	// cho 2 node tro den NULL - vi danh sach lien ket don chua co phan tu
	l.phead = NULL;
	l.pTail = NULL;
}

// ham khoi tao 1 cai node
Node* khoi_Tao_Node(int x)
{
	Node* p = new Node; // cap phat vung nho cho Node p
	if (p == NULL)
	{
		cout << "Khong du bo nho de cap phat !";
		return NULL;
	}
	p->data = x; // truyen gia tri x vao cho data
	p->pNext = NULL; // Dau tien khai bao cai Node thi Node do chua co lien ket voi Node nao het ====> con tro cua no se tro den NULL
	return p; // tra ve Node p vua khoi tao
}

// ham them node vao dau danh sach lien ket
void them_Vao_Dau(List& l, Node* p)
{
	// danh sach dang rong~
	if (l.phead == NULL)
	{
		l.phead = l.pTail = p; // node dau cung chinh bang node cuoi va la p.
	}
	else
	{
		p->pNext = l.phead; // cho con tro cua node can them la node p lien ket den node dau -> pHead
		l.phead = p;	// cap nhat lai pHead chinh la node p
	}
}
void them_Vao_Cuoi(List& l, Node* p)
{
	// danh sach dang rong~
	if (l.phead == NULL)
	{
		l.phead = l.pTail = p; // node dau cung chinh bang node cuoi va la p.
	}
	else
	{
		l.pTail->pNext = p; // cho con tro cua node can them la node p lien ket den node dau -> pHead
		l.pTail = p;	// cap nhat lai pHead chinh la node p
	}
}

// ham xuat danh sach lien ket don
void xuat_Danh_Sach(List l)
{
	for (Node* k = l.phead; k != NULL; k = k->pNext)
	{
		cout << k->data << " ";
	}
}
int Max(List l)
{
	int max = l.phead->data;
	for (Node* k = l.phead->pNext; k != NULL;k= k->pNext)
	{
		if (max < k->data)
		{
			max = k->data;
		}
	}
	return max;
}
int main()
{
	List l;
	khoi_Tao(l); // khoi tao dslk don
	int n;
	cout << "\nNhap so luong node can them: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "Nhap x = ";
		cin >> x;
		Node* p = khoi_Tao_Node(x); // khoi tao ra 1 cai node so nguyen 
		them_Vao_Cuoi(l, p); // them node p vao dau danh sach 
	}
	cout << "\n\n\t\t DANH SACH LIEN KET DON \n";
	xuat_Danh_Sach(l);
	cout << "\n\n\t\t GIA TRI LON NHAT TRONG DANH SACH\n";
	cout << Max(l);
	return 0;
}