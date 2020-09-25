================== CÁC HÀM HỖ TRỢ THAO TÁC TRÊN CHUỖI ==================
1. strlen(<chuỗi cần lấy độ dài>) : trả về độ dài của 1 chuỗi
2. strcpy(<chuỗi s1>, <chuỗi s2>) : sao chép chuỗi s2 sang chuỗi s1
3. strdup(<chuỗi>) : sao chép chuỗi - cấp phát ra 1 vùng nhớ vừa đủ để chứa cái chuỗi cần sao chép
4. strlwr(<chuỗi cần chuyển>) : chuyển chuỗi thành chuỗi in thường
5. strupr(<chuỗi cần chuyển>) : chuyển chuỗi thành kí tự in hoa
6. strrev(<chuỗi cần đảo ngược>) : đảo ngược 1 cái chuỗi
7. strcmp(<chuỗi s1>, <chuỗi s2>) : so sánh có phân biệt hoa
thường chuỗi s1 với chuỗi s2
8. stricmp(<chuỗi s1>, <chuỗi s2>) : so sánh không phân biệt hoa thường chuỗi s1 với chuỗi s2
9. strcat(<chuỗi s1>, <chuỗi s2>) : nối chuỗi s2 vào sau chuỗi s1
10. strstr(<chuỗi cha>, <chuỗi con>) : tìm xem chuỗi con có tồn tại(nằm trong) chuỗi cha hay không

== = > phải khai báo thư viện   string.h


================== XÂY DỰNG HÀM strlen() - TÍNH ĐỘ DÀI CHUỖI
==================

#include<stdio.h>
#include<conio.h>
#include<string.h>

/* Nhập vào 1 chuỗi. Tính độ dài của chuỗi đó */
/*
Độ dài của 1 chuỗi: chính là số lượng kí tự hiện có trong cái chuỗi

*/

// xây dựng hàm tính độ dài chuỗi
int STRLEN(char s[])
{
	//int i = 0; // vị trí mà chúng ta sẽ duyệt mảng chuỗi
	//while(true)
	//{
	//	if(s[i] == '\0')
	//	{
	//		return i;
	//	}
	//	i++;
	//}

	for (int i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			return i; // i chính là độ dàu của chuỗi
		}
	}
}

int main()
{
	char str[30]; // khai báo chuỗi str chứa tối đa 29 kí tự - chừa ô nhớ cuối cùng để chứa kí tự '\0'
	printf("\nNhap chuoi: ");
	gets(str); // nhập 1 chuỗi cho str từ bàn phím <=> scanf("%s", &str)
	printf("\nChuoi nhan duoc: %s", str);
	printf("\nDo dai chuoi: %d", STRLEN(str));

	getch(); // dừng màn hình
	return 0;
}



========== = XÂY DỰNG HÀM SAO CHÉP CHUỖI ========== =
strcpy(s1, s2) : sao chép chuỗi s2 sang chuỗi s1

#include<stdio.h>
#include<conio.h>
#include<string.h>

/* Nhập vào 1 chuỗi str_1. Sao chép chuỗi str_2 sang cho chuỗi s2*/


// xây dựng hàm sao chép chuỗi str_1 sang cho chuỗi str_2
void STRCPY(char str_2[], char str_1[])
{
	for (int i = 0; i < strlen(str_1); i++)
	{
		str_2[i] = str_1[i]; // bỏ từng kí tự của chuỗi str_1 sang cho chuỗi str_2
	}
	str_2[strlen(str_1)] = '\0'; // nếu không có kí tự kết thúc chuỗi sẽ bị lỗi
}



int main()
{
	char str_1[30]; // khai báo chuỗi str chứa tối đa 29 kí tự - chừa ô nhớ cuối cùng để chứa kí tự '\0'
	printf("\nNhap chuoi: ");
	gets(str_1); // nhập 1 chuỗi cho str từ bàn phím <=> scanf("%s", &str)
	printf("\nChuoi nhan duoc: %s", str_1);
	char str_2[30]; // chuỗi chứa chuỗi str_1 sao chép qua
	STRCPY(str_2, str_1); // sao chép chuỗi str_1 sang chuỗi str_2
	printf("\nChuoi str_2 sau khi sao chep: %s", str_2);

	getch(); // dừng màn hình

	return 0;
}


========== = XÂY DỰNG HÀM SAO CHÉP CHUỖI ========== =
CÚ PHÁP

char* s = strdup(<chuỗi>);
-Hàm strdup() sẽ yêu cầu bộ nhớ máy tính cấp phát ra 1 vùng nhớ
chứa <chuỗi> -sau đó con trỏ s sẽ tró đến vùng nhớ vừa được cấp phát để quản lí chuỗi đó

free(s);

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

/* Nhập vào 1 chuỗi str_1. Sao chép chuỗi str_2 sang cho chuỗi s2*/

// xây dựng hàm strdup - sao chép chuỗi
char* STRDUP(char str_1[])
{
	// cấp phát 1 vùng nhớ cho chuỗi str_2 sao chép các kí tự của chuỗi str_1 sang
	char* str_2 = (char*)malloc(strlen(str_1) + 1);
	for (int i = 0; i < strlen(str_1); i++)
	{
		str_2[i] = str_1[i];
	}
	str_2[strlen(str_1)] = '\0';
	return str_2;
	free(str_2); // giải phóng vùng nhớ cho chuỗi str_2
}


int main()
{
	char str_1[30]; // khai báo chuỗi str chứa tối đa 29 kí tự - chừa ô nhớ cuối cùng để chứa kí tự '\0'
	printf("\nNhap chuoi: ");
	gets(str_1); // nhập 1 chuỗi cho str từ bàn phím <=> scanf("%s", &str)
	printf("\nChuoi nhan duoc: %s", str_1);

	char* str_2 = STRDUP(str_1);


	printf("\nChuoi str_2 sau khi sao chep: %s", str_2);

	free(str_2);
	getch(); // dừng màn hình
	return 0;
}


============ HÀM CHUYỂN CHUỖI THÀNH CHUỖI IN THƯỜNG ============

-Tất cả các kí tự trên bàn phím đều được lưu dưới dạng mã ASCII - mã ascii là mã hệ thập phân - hệ 10. Nói chung các kí tự sẽ được lưu bằng 1 mã số nguyên(ASCII)

A: 65
B : 66
C : 67
....
Z : 90

A--->Z : 65 -- > 90

a: 97
b : 98
c : 99
....
z : 122
a--->z : 97 -- > 122

LƯU Ý :
-Mã ascii của kí tự in thường luôn luôn lớn hơn mã ascii của kí tự in hoa
- Khi làm việc trên kí tự - là nó đang thao tác trên mã ascii


#include<stdio.h>
#include<conio.h>
#include<string.h>


/* Nhập vào 1 chuỗi str_1. Chuyển chuỗi str_1 đó thành chuỗi in thường */

// xây dựng hàm chuyển chuỗi str_1 thành chuỗi in thường 
void STRLWR(char str_1[])
{
	// duyệt từ đầu chuỗi đến cuối chuỗi
	for (int i = 0; i < strlen(str_1); i++)
	{
		// nếu kí tự str_1[i] là kí tự in hoa thì sẽ chuyển thành kí tự in thường bằng cách +32
		if (str_1[i] >= 'A' && str_1[i] <= 'Z')
		{
			str_1[i] = str_1[i] + 32; // chuyển kí tự in hoa thành kí tự in thường
		}
	}
}

int main()
{
	char str_1[30]; // khai báo chuỗi str chứa tối đa 29 kí tự - chừa ô nhớ cuối cùng để chứa kí tự '\0'
	printf("\nNhap chuoi: ");
	gets(str_1); // nhập 1 chuỗi cho str từ bàn phím <=> scanf("%s", &str)
	printf("\nChuoi nhan duoc: %s", str_1);


	STRLWR(str_1); // hàm chuyển chuỗi str_1 thành chuỗi in thường
	printf("\nChuoi in thuong: %s", str_1);
	getch(); // dừng màn hình
	return 0;
}

============ XÓA KÍ TỰ ============
#include<stdio.h>
#include<conio.h>
#include<string.h>

/* Nhập vào 1 chuỗi str_1. Xóa 1 kí tự tại vị trí bất kì trong chuỗi  */

/* XÓA - THÊM BÊN MẢNG SỐ NGUYÊN */
/*

void Xoa(int a[], int &n, int vitrixoa)
{
	for(int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}

void Them(int a[], int &n, int vitrithem, int phantuthem)
{
	for(int i = n - 1; i >= vitrithem; i--)
	{
		a[i + 1] = a[i];
	}
	n++;
}

*/


// hàm xóa 1 kí tự tại vị trí bất kì trong chuỗi
void Xoa(char s[], int vitrixoa)
{
	int n = strlen(s);
	for (int i = vitrixoa + 1; i < n; i++)
	{
		s[i - 1] = s[i];
	}
	s[strlen(s) - 1] = '\0'; // kí tự kết thúc chuỗi
}


int main()
{
	char str_1[30]; // khai báo chuỗi str chứa tối đa 29 kí tự - chừa ô nhớ cuối cùng để chứa kí tự '\0'
	printf("\nNhap chuoi: ");
	gets(str_1); // nhập 1 chuỗi cho str từ bàn phím <=> scanf("%s", &str)
	printf("\nChuoi nhan duoc: %s", str_1);


	Xoa(str_1, 2); // xóa 1 kí tự tại vị trí số 2
	printf("\nChuoi sau khi xoa: %s", str_1);
	getch(); // dừng màn hình
	return 0;
}