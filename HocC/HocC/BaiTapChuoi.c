#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*BÀI 1: Nhập vào 1 chuỗi kí tự in thường. Bỏ hết tất cả các kí tự x ( x là 1 kí tự in thường
nhập từ bàn phím ) đó vào chuỗi temp.
Ví dụ s= "ki thuat lap trinh".
      x = 'h' =====> temp = "hh".*/
// ==========================================================================================//
void tim_Kiem(char s1[], char x,char temp[])
{
    int dem = 0;
  for (int i = 0; i < strlen(s1); i++)
    {

        if (s1[i] == x)
        {
            temp[dem] = s1[i];
            dem++;
        }
    }
  temp[dem] = '\0';
  printf("temp : %s", temp);
  
}
    //=========================================================================================//


/*BÀI 2: NHẬP VÀO 1 CHUỖI: VIẾT HÀM CHUẨN HÓA THEO YÊU CẦU SAU:
+ Không tồn tại kí tự khoảng trắng ở đầu chuỗi.
+ Không tồn tại kí tự khoảng trắng ở cuối chuỗi.
+ CHÚ Ý: KHÔNG DÙNG THƯ VIỆN STRING.H
*/
//==============================================================================================//

void Xoa(char s[], char vitrixoa)
{
    for (int i = vitrixoa + 1; i < strlen(s); i++)
    {
        s[i - 1] = s[i];
    }
    s[strlen(s) - 1] = '\0';
}

void Xoa_Khoang_Trang_Dau_Chuoi(char s[])
{
    while(100)
    {
        if (s[0] == ' ')
        {
            Xoa(s, 0); 
        }
        else // <=> if(s[i] != ' ')
        {
            break;
        }
    }   
}

void Xoa_Khoang_Trang_Cuoi_Chuoi(char s[])
{
    while (100)
    {
        if (s[strlen(s)-1] == ' ')
        {
            Xoa(s, strlen(s)-1);
        }
        else // <=> if(s[i] != ' ')
        {
            break;
        }
    }
}
//=====================================================================================//


/*BÀI 3:NHẬP VÀO 1 CHUỖI SỐ . CHUYỂN CHUỖI SỐ ĐÓ THÀNH 1 SỐ NGUYÊN
VD: S= "123" =========> S=123
Ý TƯỞNG:
+ 1 kí tự số mà muốn chuyển sang số nguyên =====> kí tự số - 48
+ 1 số nguyên mà muốn chuyển sang kí tự số =====> chữ số nguyên + 48
*/

int chuyen_Doi(char s[])
{
    int sum = 0;
    int mu = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        sum = sum + (s[i] - 48) * pow(10, mu);
        mu++;
    }
    return sum;
}
int main()
{
    char s1[100];
    char x;
    char temp[100];
    printf("\nNhap chuoi : ");
    gets(s1);
    printf("\nChuoi vua nhap la :%s\n ", s1);
    printf("\nDo dai cua chuoi : %d", strlen(s1));
   /* printf("\nNhap 1 ki tu : ");
    scanf("%c", &x);
    tim_Kiem(s1, x, temp);*/

    /*Xoa_Khoang_Trang_Cuoi_Chuoi(s1);
    printf("\nChuoi sau khi xoa cac ki tu khoang trang:%s", s1);
    printf("\nDo dai cua chuoi : %d", strlen(s1));*/

   
    printf("\nChuoi sau khi chuyen doi: %d", chuyen_Doi(s1) );


  
    return 0;
}