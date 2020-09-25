#include<iostream>
using namespace std;
#include<fstream>

/*
seekg(x,y)
- x:số byte cần dịch chuyển (Luôn luôn là 1 con số nguyên)
+ âm:Dịch về bàn tay trái
+ dương:dịch về tay phải
- y:vị trí bắt đầu dịch
+ y = 0:Đầu file; <=> ios::beg        <=> SEEKG_SET
+ y = 1:Vị trí hiện tại <=> ios::cur  <=> SEEKG_CUR
+ y = 2:Cuối file <=> ios::end        <=> SEEKG_END
*/ 

int main()
{
	ifstream filein;
	filein.open("INPUT.TXT", ios_base::in);
	filein.seekg(3,0); // dich sang phai 3 byte bat dau tu vi tri dau file

	filein.close();
}
