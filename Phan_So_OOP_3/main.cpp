
#include "PhanSo.h"

int main()
{
	PhanSo ps1, ps2;
	ps1.Nhap();
	ps1.RutGon();
	ps2.Nhap();
	ps2.RutGon();
	ps1.Xuat();
	cout << '\n';
	ps2.Xuat();
	cout << "\nps1 + ps2 = ";
	PhanSo Tong = ps1.TinhTong(ps2);
	Tong.RutGon();
	Tong.Xuat();

	cout << "\nps1 - ps2 = ";
	PhanSo Hieu = ps1.TinhHieu(ps2);
	Hieu.RutGon();
	Hieu.Xuat();

	cout << "\nps1 * ps2 = ";
	PhanSo Tich = ps1.TinhTich(ps2);
	Tich.RutGon();
	Tich.Xuat();

	cout << "\nps1 / ps2 = ";
	PhanSo Thuong = ps1.TinhThuong(ps2);
	Thuong.RutGon();
	Thuong.Xuat();

	if (ps1.KiemTraHaiPhanSo(ps2))
		cout << "\nps1 > ps2";
	else
		cout << "\nps1 <= ps2";
	return 0;
}
