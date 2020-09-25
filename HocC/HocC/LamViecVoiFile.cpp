#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	/*================================== ĐỌC FILE =============================================*/
	// Cú pháp:ifstream<tên biến file
	//Bước 1: Khai báo ra biến để đọc File.
	ifstream Filein; // khai báo ra 1 biến filein để đọc dữ liệu từ file
	//Bước 2: Mở file cần đọc dữ liệu
	//open<tên đường dẫn đến file cần mở-để đọc - đây là 1 cái chuỗi>,<chế độ làm việc với file>;
	Filein.open("d:\\ondrives\\onedrive\\desktop\\INPUT.TXT",ios_base::in);
	if (Filein.fail() == true)
	{
		cout << "\nFile cua ban khong ton tai";
		return 0; // ket thuc chuong trinh.
	}
	// Bước 3:Xử lí file- đọc dữ liệu từ file ra chương trình
	int x;
	int y;
	Filein >> x; // đọc số nguyên đầu tiên từ FILE
	Filein >> y; // đọc số nguyên tiếp theo  từ FILE
	//Buoc 4: Đóng file lại sau khi xử lí 
	Filein.close(); // dong file lai sau khi xu li
	//cout << "Tong cua 2 so nguyen: " << x + y;

	/*================================== GHI FILE =============================================*/
	ofstream Fileout;
	Fileout.open("D:\\ondrives\\OneDrive\\Desktop\\OUTPUT.TXT", ios_base::out);
	Fileout << x + y; // Lay x+y roi ghi vao file OUTPUT.TXT
	
	Fileout.close(); // Dong file lai
	
	return 0;
}