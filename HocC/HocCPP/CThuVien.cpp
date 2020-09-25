#include "CThuVien.h"
void CThuVien::Input()
{
	while (true)
	{
		system("cls");
		int luachon;
		cout << "\n\n\t\t============ THU VIEN X ============\n";
		cout << "\n\t1.Doc gia tre em";
		cout << "\n\t2.Doc gia nguoi lon";
		cout << "\n\t0.Thoat";
		cout << "\n\n\t\t ============= END ============\n";
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		CDocGia* x;//khai bao con tro lop cha
		if (luachon == 0)
		{
			cout << "\nHen gap lai";
			break;
			system("pause");
		}
		else if (luachon == 1)
		{
			x = new CDocGiaTreEm; // doi tuong cha x new ra 1 doi tuong con
			cout << "\n\tNhap thong tin doc gia tre em";
			x->Input();
			x->Setter_KT(true); // danh dau la cai thang nay la doc gia tre em
			ds_docgia.push_back(x); // them 1 doi tuong con vao mang 
			system("pause");

		}
		else if (luachon == 2)
		{
			x = new CDocGiaNguoiLon; // doi tuong cha x new ra 1 doi tuong con
			cout << "\n\tNhap thong tin doc gia nguoi lon";
			x->Input();
			x->Setter_KT(false); // danh dau la cai thang nay la doc gia nguoi lon
			ds_docgia.push_back(x); // them 1 doi tuong con vao mang 
			system("pause");
		}

	}
}
void CThuVien::Output()
{
	cout << "\n\n\t\t DANH SACH DOC GIA\n";
	for (int i = 0; i < ds_docgia.size(); i++)
	{
		if (ds_docgia[i]->Getter_KT() == true)
		{
			cout << "\n\tTHONG TIN DOC GIA TRE EM THU " << i + 1;
			ds_docgia[i]->Output(); // xuat ra thong tin doc gia thu i
			cout << endl;
		}
		else
		{
			cout << "\n\tTHONG TIN DOC GIA NGUOI LON THU " << i + 1;
			ds_docgia[i]->Output(); // xuat ra thong tin doc gia thu i
			cout << endl;
		}
	}
	
}
// phuong thuc tinh tong tien lam the
int CThuVien::tinh_Tong_Tien_Lam_The()
{
	int sum = 0;
	for (int i = 0; i < ds_docgia.size(); i++)
	{
		sum = sum + ds_docgia[i]->tinh_Tien_Lam_The();
	}
	return sum;
}
CThuVien::CThuVien()
{

}

CThuVien::~CThuVien()
{
}