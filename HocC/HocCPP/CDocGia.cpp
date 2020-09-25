#include "CDocGia.h"


void CDocGia::Input()
{
	rewind(stdin);
	cout << "\nnhap ho ten doc gia: ";
	getline(cin, hoten);

	rewind(stdin);
	cout << "\nnhap ngay lap the (nhap dinh dang dd/mm/yyyy) : ";
	getline(cin, ngaylapthe);

	cout << "\nnhap so thang co hieu luc: ";
	cin >> so_thang_co_hieu_luc;
}
void CDocGia::Output()
{

	cout << "\nho ten doc gia: " << hoten;
	cout << "\nngay lap the:  " << ngaylapthe;
	cout << "\nso thang co hieu luc: " << so_thang_co_hieu_luc;

}
CDocGia::CDocGia()
{
}


CDocGia::~CDocGia()
{
}