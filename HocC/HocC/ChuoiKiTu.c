#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>




// XÂY DỰNG LẠI HÀM SAO CHÉP CHUỖI strlen();
int tinh_Do_Dai_Chuoi(char s[])
{

	// Cách 1:
	/*int i = 0;
	while (100)
	{
		if (s[i] == '\0')
		{
			return i;
		}
		i++;
	}
	return i;*/

	// Cách 2:
	for (int i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			return i;
		}
	}
}

// XÂY DỰNG LẠI HÀM SAO CHÉP CHUỖI strcpy();
void sao_Chep_Chuoi(char s2[], char s1[])
{
	for (int i = 0; i < strlen(s1); i++)
	{
		s2[i] = s1[i];
	}
	s2[strlen(s1)] = '\0'; // thêm kí tự '\0' vào cuối chuỗi.
}

// HÀM XÓA 1 KÍ TỰ TẠI VỊ TRÍ BẤT KÌ TRONG CHUỖI
void Xoa(char s[], int vitrixoa)
{
	int n = strlen(s);
	for (int i = vitrixoa + 1; i <= n; i++)
	{
		s[i - 1] = s[i];
	}
	
	//s[strlen(s) - 1] = '\0';
}

void Them(char s[], int vitrithem, char kituthem)
{
	int n = strlen(s);
	for (int i = n - 1; i >= vitrithem; i--)
	{
		s[i + 1] = s[i];
	}
	s[vitrithem] = kituthem;
	s[n+1] = '\0';
	

}
// Hàm sao chép chuỗi 
char* STRDUP(char s1[])
{
	char* s2 = (char*)malloc(strlen(s1) + 1); // + 1 để thêm kí tự '\0'
	for (int i = 0 ; i < strlen(s1); i++)
	{
		s2[i] = s1[i];
	}
	s2[strlen(s1)] = '\0';
	return s2;
	free(s2);
}

// hàm chuyển chuỗi in thường STRLWR
void chuyen_chuoi_in_thuong(char s1[])
{
	for (int i = 0; i < strlen(s1); i++)
	{
		if (65 <= s1[i] <= 90)
		{
			s1[i]=s1[i] + 32; // chuyển kí tự in hoa thành in thường.
		}
	}
}

void Hoan_Vi(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

// xây dựng lại hàm đảo ngược chuỗi: strrev
void STRREV(char s[])
{
	int dodai = strlen(s);
	for (int i = 0; i < (dodai / 2); i++)
	{
		// đổi chỗ cặp kí tự cho nhau theo công thức: s[i] hoán vị s[dodai - i - 1]
		Hoan_Vi(&s[i], &s[dodai - i - 1]);
	}
}


 // XÂY DỰNG LẠI HÀM STRCMP: HÀM SO SÁNH CHUỖI CÓ PHÂN BIỆT HOA , THƯỜNG.
 /* ============================  Ý TƯỞNG   ===============================
    s1 = "thuan"
	s2 = "minh thuan"
	Kiểm tra từng kí tự bằng cách
	Duyệt từ đầu chuỗi đến cuối chuỗi có ĐỘ DÀI NHỎ NHẤT*/
int STRCMP(char s1[], char s2[])
{
	int dodai_min = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2); // câu lệnh điều kiện rút gọn
	for (int i = 0 ; i < dodai_min; i++)
	{
		if (s1[i] > s2[i])
		{
			return 1;// chuỗi s1 > chuỗi s2
		}
		else if(s1[i] < s2[i])
		{
			return -1; // chuỗi s1 < chuỗi s2
		}
	}
	if (strlen(s1) > strlen(s2))
	{
		return 1;
	}
	else if (strlen(s1) < strlen(s2))
	{
		return -1;
	}
	return 0;
}
int main()
{
	//int namsinh;
	//// Cách 1 : Khai báo chuỗi
	//char hoten[30]; // khai báo chuỗi hoten chứa tối đa 29 kí tự , dành ra ô nhớ cuối để chứ kí tự kểt thúc chuỗi - '\0'.
	//// Cách 2 : Khai báo chuỗi monhoc nhưng cho giá trị mặc định ban đầu là 1 cái chuỗi.
	//char monhoc[30] = "Ki thuat lap trinh"; // tự động thêm kí tự \0 vào  cuối chuỗi.
	//// Cách 3 : Khai báo chuỗi maso nhưng cho giá trị mặc định ban đầu là 1 cái chuỗi và tự động xác định độ dài chuỗi.
	//char maso[] = "70DCTT23";

	///* XUẤT CHUỖI */;
	//// cách 1 : dùng lệnh printf(" đặc tả : %s ",chuỗi cần xuất);
	//printf("%s", maso);

	///* NHẬP CHUỖI */;
	//// Cách 1: dùng lệnh scanf() : Khi dùng lệnh scanf sẽ ko nhận kí tự khoảng trắng và xuống dòng.
	////printf("\nNHAP CHUOI :");
	////scanf("%s", &hoten);
	////printf("\n Chuoi nhan duoc: %s", hoten);

	//// Cách 2: dùng hàm gets() để nhập chuỗi - hàm này nhận kí tự khoảng trắng, không nhận kí tự '\n'.
	//printf("\nNHAP NAM SINH : ");
	//scanf("%d", &namsinh);
	//while (getchar() != '\n'); // Xóa bộ nhớ đệm 
	//printf("\nNHAP TEN SINH VIEN : ");
	//gets(hoten);
	//printf("\n SINH VIEN : %s\n", hoten);
	//printf("\n DO DAI LA : %d\n", tinh_Do_Dai_Chuoi(hoten));
	//printf("\n NAM SINH : %d", namsinh);

	char s1[100]; // khái báo chuỗi s1 tối đa 29 kí tự 
	char s2[100];
	char s3[100];

	//while (getchar() != '\n');
	printf("\nNhap chuoi s2: ");
	gets(s2);
	printf("\n Chuoi s2 vua nhap la: %s\n", s2);
	printf("\nNhap chuoi s3: ");
	gets(s3);
	printf("\n Chuoi s3 vua nhap la: %s\n", s3);
	if (STRCMP(s2, s3) > 0)
	{
		printf("\nChuoi s2 > s3\n");

	}
	else if (STRCMP(s2, s3) < 0)
	{
		printf("\nChuoi s2 < s3\n");

	}
	else
	{
		printf("\nChuoi s2 = s3 \n");
	}

	//printf("\nChuoi co do dai la: %d", strlen(s1));
	//char *s2 = STRDUP(s1);
	//(s2, s1); // sao chép chuỗi s1 sang cho s2;
	//printf("\nChuoi s1 sau khi sao chep sang s2: %s",s2);
	//chuyen_chuoi_in_thuong(s1); // hàm chuyển chuỗi s1 thành in thường
	//printf("\nChuoi in thuong :%s", s1);
	//STRREV(&s1); // hàm đảo ngược chuỗi
	//printf("\nChuoi dao nguoc : %s", s1);
	/*printf("\nNhap vi tri can xoa:");
	scanf("%d", &vitrixoa);
	Xoa(s1 , vitrixoa);
	printf("\nChuoi sau khi xoa la: %s ",s1);*/
	/*Them(s1, 3, 'c');
	printf("\nChuoi sau khi them : %s", s1);
	printf("\nDo dai cua chuoi s1 la %d", strlen(s1));*/
	//free(s1);

	getch();
	return 0;



}