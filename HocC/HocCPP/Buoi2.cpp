#include<iostream>
using namespace std;
struct dathuc
{
	int n;
	int* hs;
}; typedef struct dathuc DaThuc;
void nhapdt(DaThuc& dt)
{
	cout << "Nhap bac: ";
	cin >> dt.n;
	dt.hs = new int[dt.n + 1];
	for (int i = dt.n; i >= 0; --i)
	{
		cout << "\nNhap he so hs[" << i << "] = ";
		cin >> dt.hs[i];
	}
}
void xuatdt(DaThuc dt)
{
	for (int i = dt.n; i >= 0; --i)
	{
		cout << dt.hs[i] << "x^" << i << " + ";
	}

	
}
DaThuc Cong(DaThuc dt1, DaThuc dt2)
{
	DaThuc kq;
	kq.n = dt1.n > dt2.n ? dt1.n : dt2.n;
	kq.hs = new int[kq.n + 1];
	for (int i = 0; i <= kq.n; ++i)
	{
		if (i <= dt1.n && i <= dt2.n)
		{
			kq.hs[i] = dt1.hs[i] + dt2.hs[i];
		}
		if (i > dt1.n)
		{
			kq.hs[i] = dt2.hs[i];
		}
		if (i > dt2.n)
		{
			kq.hs[i] = dt1.hs[i];
		}
	}
	return kq;
}
int main()
{
	DaThuc *x =new DaThuc;
	nhapdt(*x);
	xuatdt(*x);
	return 0;
}