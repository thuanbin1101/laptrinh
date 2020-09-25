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
		do
		{
			printf("\nNhap so dong: ");
			scanf("%d", &dong);
			printf("\nNhap so cot: ");
			scanf("%d", &cot);

			if (dong < 0 || cot < 0)
			{
				printf("\n Khong hop le");
			}
		} while (dong < 0 || cot < 0);

		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &luachon);
		printf("\n\n\tNHAP MANG\n");
		nhapMang(a, dong, cot);



		if (luachon == 1)
		{
			printf("\nTong cac so nguyen to la : %d\n", tong_Cac_SNT_Trong_Ma_Tran(a, dong, cot));
			system("pause");
		}
		//		else if (luachon == 2)
		//		{
		//
		//			break;
		//		}
		//		else if (luachon == 3)
		//		{
		//
		//			break;
		//		}
		//		else if (luachon == 4)
		//		{
		//
		//			break;
		//		}
		//		else if (luachnon == 5)
		//		{
		//
		//			break;
		//		}
		//		else
		//		{
		//			break;
		//		}
		//		

	}
}