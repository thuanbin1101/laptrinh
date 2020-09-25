#include<iostream>
using namespace std;
#include<fstream>

bool KT_SNT(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	// Doc du lieu
	ifstream filein;
	filein.open("INPUT.TXT",ios_base::in ); 
	if (filein.fail() == true)
	{
		cout << "\nFile khong ton tai";
		return 0;
	}

	int arr[100];
	// doc mang so nguyen tu file
	//int n;
	//filein >> n; // doc so nguyen o dong dau tien
	//for (int i = 0; i < n; i++)
	//{
	//	filein >> arr[i]; // doc du lieu tu file;
	//}
	int dem = 0;
	int i = 0;
	while (!filein.eof())
	{
		filein >> arr[i];
		i++;
		dem++;
	}
	
	// Ghi du lieu
	ofstream fileout;
	fileout.open("KETQUA.TXT", ios_base::out);
	/*for (int i = 0; i < n; i++)
	{
		if (KT_SNT(arr[i]) == true)
		{
			fileout << arr[i] << " ";
		}
	}*/
	for (int i = 0; i < dem; i++)
	{
		if (KT_SNT(arr[i]) == true)
		{
			fileout << arr[i];
		}
	}
	fileout.close();
	filein.close();
	return 0;
}