#include "PhanSo.h"

int main()
{
	PhanSo ps1;
	ps1.nhap();
	ps1.rutgon();
	ps1.xuat();

	double kq = ps1.TinhKetQuaPhanSo();
	if (kq < 0) cout << "\nps1 < 0";
	else if (kq > 0) cout << "\nps1 > 0";
	else cout << "\nps1 = 0";
	return 0;
}
