#include"CDocGia.h"
#include"CDocGiaNguoiLon.h"
#include"CDocGiaTreEm.h"
#include"CThuVien.h"
int main()
{

	CThuVien* x = new CThuVien;
	x->Input();
	x->Output();
	cout << "\n\n\t\tTONG TIEN LAM THE\n" << x->tinh_Tong_Tien_Lam_The() << endl;
	delete x;
	system("pause");
	return 0;
}