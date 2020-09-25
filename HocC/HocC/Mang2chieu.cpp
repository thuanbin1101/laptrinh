#include<stdio.h>
#include<stdlib.h>
void nhapMang(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("\nNhap phan tu a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMang(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}

bool kiem_Tra_So_Nguyen_To(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		if (n == 2)
		{
			return true;
		}
		else
		{
			if (n % 2 == 0)
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
		}
	}
	return true;
}

int tong_Cac_SNT_Trong_Ma_Tran(int a[][100], int dong, int cot)
{
	int sum = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (kiem_Tra_So_Nguyen_To(a[i][j]) == true)
			{
				sum = sum + a[i][j];
			}
		}
	}
	xuatMang(a, dong, cot);
	return sum;
}

void tong_Cac_Phan_Tu_Tren_Tung_Dong(int a[][100], int dong, int cot)
{
	printf("\n\tXUAT MANG\n");
	xuatMang(a, dong, cot);
	for (int i = 0; i < dong; i++)
	{
		int sum = 0;
		for (int j = 0; j < cot; j++)
		{
			sum = sum + a[i][j];
		}
		printf("\n\tTong cac phan tu tren dong %d = %d\n", i,sum);
	}
}

void tong_Cac_Phan_Tu_Tren_Tung_Cot(int a[][100], int dong, int cot)
{
	printf("\n\tXUAT MANG\n");
	xuatMang(a, dong, cot);
	for (int j = 0; j < cot; j++)
	{
			int sum = 0;
		for (int i = 0; i < dong; i++)
		{
			sum = sum + a[i][j];
		}
		printf("\n\tTong cac phan tu tren cot %d = %d\n", j, sum);
	}
}

void duong_Cheo_Chinh(int a[][100], int dong, int cot)
{
	printf("\n\tXUAT MANG\n");
	xuatMang(a, dong, cot);
	printf("\nCAC PHAN TU TREN DUONG CHEO CHINH LA:\n");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (i == j)
			{
				
				printf("%7d", a[i][j]);
			}
		}
	}
	printf("\n");
}

void duong_Cheo_Phu(int a[][100], int dong, int cot)
{
	printf("\n\tXUAT MANG\n");
	xuatMang(a, dong, cot);
	printf("\nCAC PHAN TU TREN DUONG CHEO PHU LA:\n");
	for (int i = 0; i < dong; i++)
	{
		
	
		printf("%7d", a[i][cot - i - 1]);

	}
	printf("\n");
}
int main()
{
	int a[100][100];
	int dong;
	int cot;
	int luachon;

	while (true)
	{

		system("cls");
		printf("\n\n\t============MENU===================\n");
		printf("\t1.Tinh tong cac so nguyen to trong ma tran\n");
		printf("\t2.Tinh tong cac phan tu tren tung dong\n");
		printf("\t3.Tinh tong cac phan tu tren tung cot\n");
		printf("\t4.Xuat cac phan tu tren duong cheo chinh\n");
		printf("\t5.Xuat mac phan tu tren duong cheo phu\n");
		printf("\t0.Ket thuc chuong trinh\n");
		printf("\t===============END=================");
	
		
			printf("\nNhap so dong: ");
			scanf("%d", &dong);
			printf("\nNhap so cot: ");
			scanf("%d", &cot);

			if (dong < 0 || cot < 0)
			{
				printf("\n Khong hop le");
			}


		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &luachon);
		printf("\n\n\tNHAP MANG\n");
		nhapMang(a, dong, cot);



		if (luachon == 1)
		{
			printf("\nTong cac so nguyen to la : %d\n", tong_Cac_SNT_Trong_Ma_Tran(a, dong, cot));
			system("pause");
		}
			else if (luachon == 2)
			{
				tong_Cac_Phan_Tu_Tren_Tung_Dong(a, dong, cot);
				system("pause");
			}

			else if (luachon == 3)
			{
				tong_Cac_Phan_Tu_Tren_Tung_Cot(a, dong, cot);
				system("pause");
			}

			else if (luachon == 4)
			{
				duong_Cheo_Chinh(a, dong, cot);
				system("pause");
				
			}
			else if (luachon == 5)
			{
				duong_Cheo_Phu(a, dong, cot);
				system("pause");
			}
			else
			{
				break;
			}
			

	}
}