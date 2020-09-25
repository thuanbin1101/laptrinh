#include "CDocGiaTreEm.h"
void CDocGiaTreEm::Input()
{
	CDocGia::Input();
	cin.ignore();
	cout << "\nNhap ho ten nguoi dai dien: ";
	getline(cin, hoten_nguoi_dai_dien);
}
void CDocGiaTreEm::Output()
{
CDocGia::Output();
	cout << "\nHo ten nguoi dai dien: " << hoten_nguoi_dai_dien;
}

int CDocGiaTreEm::tinh_Tien_Lam_The()
{
	return so_thang_co_hieu_luc * 5000;
}
CDocGiaTreEm::CDocGiaTreEm()
{
}


CDocGiaTreEm::~CDocGiaTreEm()
{
}