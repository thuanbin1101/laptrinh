#include<iostream>
using namespace std;
struct dathuc
{
	int n; // so bac cao nhat cua da thuc
	double* heso;
};
typedef struct dathuc DaThuc;

void nhap_Da_Thuc(DaThuc* x)
{
	do
	{
		cout << "Nhap vao so bac cua da thuc: ";
		cin >> x->n;
		if (x->n < 1)
		{
			cout << "So bac cua da thuc phai > 1, xin kiem tra lai";
		}
	} while (x->n < 1);
	x->heso = new double[x->n + 1];
	for (int i = 0; i <= x->n; i++)
	{
		cout << "\nNhap vao he so thu " << i + 1 << " la: ";
		cin >> x->heso[i];
	}
}
void xuat_Da_Thuc(DaThuc* x)
{
	if (x->n == 1)
	{
		cout << x->heso[0] << " + ";
		cout << x->heso[1] << " * x";
	}
	else
	{
		cout << x->heso[0] << " + ";
		cout << x->heso[1] << " * x + ";

		for (int i = 2; i < x->n; i++)
		{
			cout << x->heso[i] << " * x^" << i << " + ";
		}
		cout << x->heso[x->n] << " * x^" << x->n;
	}
}
DaThuc* tong_2_Da_Thuc(DaThuc* x, DaThuc* y)
{
	int Max = x->n > y->n ? x->n : y->n;
	int Min = x->n < y->n ? x->n : y->n;
	DaThuc* kq = new DaThuc;
	kq->n = Max;
	kq->heso = new double[kq->n + 1];
	for (int i = 0; i <= Min; ++i)
	{
		kq->heso[i] = x->heso[i] + y->heso[i];
	}
	if (Max == x->n)
	{
		for (int i = Min + 1; i <= Max; ++i)
		{
			kq->heso[i] = x->heso[i];
		}
	}
	else
	{
		for (int i = Min + 1; i <= Max; ++i)
		{
			kq->heso[i] = y->heso[i];
		}
	}
	return kq;
}
int main()
{
	DaThuc* x = new DaThuc;
	DaThuc* y = new DaThuc;
	cout << "\n\n\t\t NHAP DA THUC 1" << endl;
	nhap_Da_Thuc(x);
	xuat_Da_Thuc(x);
	cout << "\n\n\t\t NHAP DA THUC 2 " << endl;
	nhap_Da_Thuc(y);
	xuat_Da_Thuc(y);

	cout << "\nTong da thuc \n" << tong_2_Da_Thuc(x, y);

	delete x;
	delete y;
	return 0;
}