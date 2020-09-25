#include<iostream>
using namespace std;
#include<fstream>
#include<math.h>

void doc_File(int a[], int &n,ifstream &filein)
{
	while (filein.eof() == false)
	{
		filein >> a[n];
		char x;
		filein >> x;	
		n++;
	}
}

void xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"  ";
	}
}

int UCLN(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else if (x < y)
		{
			y = y - x;
		}
	}
	return x;
}

int BCNN(int x, int y)
{
	return (x * y) / UCLN(x, y);
}

int tim_UCLN(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = UCLN(x, a[i]);
	}
	return x;
}

int tim_BCNN(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = BCNN(x, a[i]);
	}
	return x;
}



int main()
{
	int a[100];
	int n = 0;
	ifstream filein;
	filein.open("INPUT.TXT", ios_base::in);
	if (filein.fail() == true)
	{
		cout << "\nKhong co file ";
		return 0;
	}
	doc_File(a, n, filein);
	cout << "\n\n\t\tDAY SO NGUYEN\n";
	xuat_Mang(a, n);
	ofstream fileout;
	fileout.open("UCLN.TXT", ios_base::out);
	fileout << "\n\n\t\tUCLN TRONG MANG\n";
	fileout << endl << tim_UCLN(a, n);
	fileout.close();
	fileout.open("BCNN.TXT", ios_base::out);
	fileout << "\n\n\t\t BCNN TRONG MANG\n";
	fileout << endl << tim_BCNN(a, n);
	fileout.close();
	filein.close();
	return 0;
}