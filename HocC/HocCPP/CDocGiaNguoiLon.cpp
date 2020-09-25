#include "CDocGiaNguoiLon.h"
void CDocGiaNguoiLon::Input()
{
	CDocGia::Input();
	cin.ignore();
	cout << "\nNhap CMND: ";
	getline(cin, CMND);
}
void CDocGiaNguoiLon::Output()
{
	CDocGia::Output();
	cout << "\nCMND: " << CMND;
}
int CDocGiaNguoiLon::tinh_Tien_Lam_The()
{
	return  so_thang_co_hieu_luc * 10000;
}
CDocGiaNguoiLon::CDocGiaNguoiLon()
{
}


CDocGiaNguoiLon::~CDocGiaNguoiLon()
{
}