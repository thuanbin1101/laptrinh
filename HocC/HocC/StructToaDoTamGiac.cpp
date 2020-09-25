#include<stdio.h>
#include<math.h>

struct toado
{
	int x;
	int y;

};
typedef struct toado TOADO;

// Hàm nhập tọa độ
void nhap_Toa_Do(TOADO &td)
{
	printf("\nNhap vao diem x:");
	scanf("%d", &td.x);
	printf("\nNhap vao diem y:");
	scanf("%d", &td.y);
}

// Hàm xuất tọa độ
void xuat_Toa_Do(TOADO td)
{
	printf("(%d , %d)", td.x, td.y);
}

float tinh_Do_Dai_Canh(TOADO A, TOADO B)
{
	return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
}



//
//int main()
//{
//	TOADO A;
//	TOADO B;
//	TOADO C;
//	printf("\nNhap toa do diem A:");
//	nhap_Toa_Do(A);
//	printf("\nNhap toa do diem B:");
//	nhap_Toa_Do(B);
//	printf("\nNhap toa do diem C:");
//	nhap_Toa_Do(C);
//	printf("\nToa do diem A la:");
//	xuat_Toa_Do(A);
//	printf("\nToa do diem B la:");
//	xuat_Toa_Do(B);
//	printf("\nToa do diem C la:");
//	xuat_Toa_Do(C);
//	printf("\nDo dai canh AB: ");
//	printf("%f", tinh_Do_Dai_Canh(A, B));
//	printf("\nDo dai canh BC: ");
//	printf("%f", tinh_Do_Dai_Canh(B, C));
//	printf("\nDo dai canh AC: ");
//	printf("%f", tinh_Do_Dai_Canh(A, C));
//	
//	return 0;
//}


//================================== STRUCT LỒNG STRUCT  ===============================================(KẾT QUẢ GIỐNG Ở TRÊN)======
struct tamgiac
{
	TOADO A;
	TOADO B;
	TOADO C;
}; typedef struct tamgiac TAMGIAC;

// hàm nhập tam giác
void nhap_Toa_Do_Tam_Giac(TAMGIAC &tg)
{
	printf("\nNhap toa do diem A:");
	nhap_Toa_Do(tg.A);
	printf("\nNhap toa do diem B:");
	nhap_Toa_Do(tg.B);
	printf("\nNhap toa do diem C:");
	nhap_Toa_Do(tg.C);
}

void xuat_Toa_Do_Tam_Giac(TAMGIAC tg)
{
	printf("\nToa do diem A la:");
	xuat_Toa_Do(tg.A);
	printf("\nToa do diem B la:");
	xuat_Toa_Do(tg.B);
	printf("\nToa do diem C la:");
	xuat_Toa_Do(tg.C);
}

int main()
{
	TAMGIAC tg;
	nhap_Toa_Do_Tam_Giac(tg);
	xuat_Toa_Do_Tam_Giac(tg);
	printf("\nDo dai canh AB: ");
	printf("%f", tinh_Do_Dai_Canh(tg.A, tg.B));
	printf("\nDo dai canh BC: ");
	printf("%f", tinh_Do_Dai_Canh(tg.B, tg.C));
	printf("\nDo dai canh AC: ");
	printf("%f", tinh_Do_Dai_Canh(tg.A, tg.C));

	return 0;
}