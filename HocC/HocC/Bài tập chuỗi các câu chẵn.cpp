#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// ===================================== CÂU 2 ===============================================//
void dem_Chu_Cai(char s[])
{
	int dem = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 65 && s[i] <=90 || s[i] >= 97 && s[i] <=122)
		{
			dem++;
		}
	}
	printf("\nCo %d chu cai", dem);
}

void dem_Chu_So(char s[])
{
	int dem = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			 dem++;
		}
	}
	printf("\nCo %d chu so", dem);
}

void dem_Ki_Tu_Khac(char s[])
{
	int dem = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if ((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
		{
			dem++;
		}
	}
	printf("\n Co %d ki tu khac", dem);
}

// ========================================= CÂU 4 ===========================================//
char doixung(char s1[])
{
	int i;
	for (i = 0; i < strlen(s1) / 2; i++)
	{
		if (s1[i] != s1[strlen(s1) - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}

void kiem_Tra_Doi_Xung(char s[])
{
	if (doixung(s) == 0)
	{
		strrev(s);
		printf("\n Chuoi khong phai doi xung nen in thanh chuoi dao nguoc: %s", s);
	}
	if (doixung(s) == 1)
	{
		printf("\nchuoi vua nhap la chuoi doi xung\n");
	}
}

void dem_ki_Tu_Trong_Chuoi(char s[])
{
	int dem = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'X')
		{
			dem++;
		}
	}
	printf("\n Ky tu X xuat hien %d lan trong chuoi", dem);
}

// ================================ CÂU 8 =========================================//
void kiem_Tra(char s)
{
	if (s >= 65 && s <= 122)
	{
		printf("\n%c la chu cai", s);
	}
	else if (s >= 48 && s <= 57)
	{
		printf("\n%c la chu so", s);
	}
}
	
// =============================== CÂU 6 ========================================//
void chieu_Dai_Cua_Chuoi(char s[])
{
	printf("\n Chieu dai cua chuoi la : %d", strlen(s));
}

void so_Lan_Xuat_Hien(char s[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		bool KT = true; // giả sử s[i] là phần tử phân biệt
		// duyệt ngược về đầu chuỗi để kiểm tra cái giả sử ban đầu
		for (int j = i - 1; j >= 0; j--)
		{
			if (s[i] == s[j])
			{
				KT = false;
				break;
			}
		}
		if (KT == true)
		{
			// lấy s[i] phân biệt duyệt lại với chuỗi ban đầu để đếm số lần xuất hiện
			int dem = 0;
			for (int k = 0; k < n; k++)
			{
				if (s[i] == s[k])
				{
					dem++;
				}
			}
			printf("\n Ky tu %c xuat hien %d lan", s[i], dem);
		}
	}
}

void chuyen_Chu_Thuong_Thanh_Chu_Hoa(char s[])
{
	strupr(s);
	printf("\n%s", s);
}
void dao_Nguoc_Xau(char s[])
{
	strrev(s);
	printf("\n%s", s);
}

int main()
{
	char s[100];
	printf("\n\n\t\t NHAP CHUOI\n");
	rewind(stdin);
	gets_s(s);
	printf("\n\n\t\t XUAT CHUOI");
	printf("\n %s", s);
	dem_Chu_Cai(s);
	dem_Chu_So(s);
	dem_Ki_Tu_Khac(s);
	//========================================== CÂU 2 =====================================//
	kiem_Tra_Doi_Xung(s);
	dem_ki_Tu_Trong_Chuoi(s);

	// ======================================== CÂU 8 =======================================//
	char s2;
	printf("\nNhap 1 ki tu ");
	scanf("%c", &s2);
	kiem_Tra(s2);

	//=========================================  CÂU 6 ======================================//
	char s1[100];
	printf("\n\n\t\t NHAP CHUOI\n");
	rewind(stdin);
	gets_s(s1);
	printf("\n\n\t\t XUAT CHUOI");
	printf("\n %s", s1);
	printf("\n Cau a:");
	chieu_Dai_Cua_Chuoi(s1);
	printf("\n Cau b:");
	so_Lan_Xuat_Hien(s1);
	printf("\n Cau c:");
	chuyen_Chu_Thuong_Thanh_Chu_Hoa(s1);
	printf("\n Cau d:");
	dao_Nguoc_Xau(s1);
	printf("\n Cau e , f:");
	kiem_Tra_Doi_Xung(s1);
	return 0;
}

