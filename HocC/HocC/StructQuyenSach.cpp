#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct sach
{
	char masach[10];
	char tensach[30];
	char tacgia[15];
	int namxuatban;
}; typedef struct sach Sach;

void nhap_1_Quyen_Sach(Sach& sach)
{
	printf("\nNhap ma sach: ");
	rewind(stdin);
	gets_s(sach.masach);
	printf("\nNhap ten sach: ");
	rewind(stdin);
	gets_s(sach.tensach);
	printf("\nNhap ten tac gia: ");
	rewind(stdin);
	gets_s(sach.tacgia);
	printf("\nNhap nam xuat ban: ");
	scanf("%d", &sach.namxuatban);
}

void xuat_1_Quyen_Sach(Sach sach)
{
	printf("Ma sach: %s", sach.masach);
	printf("\nTen sach: %s", sach.tensach);
	printf("\nTac gia: %s", sach.tacgia);
	printf("\nNam xuat ban: %d\n", sach.namxuatban);
}

void nhap_Danh_Sach_Quyen_Sach(Sach sach[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Quyen sach thu %d: ", i + 1);
		nhap_1_Quyen_Sach(sach[i]);
	}
}

void xuat_Danh_Sach_Quyen_Sach(Sach sach[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Quyen sach thu %d: ", i + 1);
		xuat_1_Quyen_Sach(sach[i]);
	}
}

void hoan_Vi(Sach& x, Sach& y)
{
	Sach temp = x;
	x = y;
	y = temp;
}

void sap_Xep(Sach sach[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(sach[i].tensach, sach[j].tensach) > 0)
			{
				hoan_Vi(sach[i], sach[j]);
			}
		}
	}
	xuat_Danh_Sach_Quyen_Sach(sach, n);
}

void tim_Sach(Sach sach[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(sach[i].tensach, "tin hoc dai cuong") == 0)
		{
			xuat_1_Quyen_Sach(sach[i]);
		}
	}
}



int main()
{
	Sach sach[100];
	int n;
	printf("\nNhap so luong sach: ");
	scanf("%d", &n);
	printf("\n\n\t\t DANH SACH QUYEN SACH\n");
	nhap_Danh_Sach_Quyen_Sach(sach, n);
	printf("\n\n\t\t XUAT DANH SACH QUYEN SACH\n");
	xuat_Danh_Sach_Quyen_Sach(sach, n);
	printf("\n\n\t\t SACH THEO THU TU abc\n");
	sap_Xep(sach, n);
	printf("\n\n\t\t SACH TIN HOC DAI CUONG\n");
	tim_Sach(sach, n);
	
}