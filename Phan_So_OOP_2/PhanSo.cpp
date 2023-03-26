#include "PhanSo.h"

void PhanSo::nhap()
{
	cout << "Nhap tu so: "; cin >> tuso;
	do
	{
		cout << "Nhap mau so: "; cin >> mauso;
		if (mauso == 0) cout << "\nMau so nhap khong hop le!\n";
	} while (mauso == 0);
}

void PhanSo::xuat()
{
	if (mauso < 0) mauso *= -1, tuso *= -1;
	cout << '\n' << tuso << '/' << mauso;
}

double PhanSo::TinhKetQuaPhanSo()
{
	return (double)tuso / mauso;
}

int __gcd(int a, int b)
{
	if (a < 0) a *= -1;
	if (b < 0) b *= -1;
	int MIN = min(a, b), MAX = max(a, b);
	if (MAX % MIN == 0) return MIN;
	for (int i = MIN / 2; i >= 1; --i) if (MIN % i == 0 && MAX % i == 0) return i;
}

void PhanSo::rutgon()
{
	int temp = __gcd(tuso, mauso);
	tuso /= temp;
	mauso /= temp;
}

PhanSo PhanSo::TinhTong(PhanSo ps)
{

}

PhanSo PhanSo::TinhHieu(PhanSo)
{

}

PhanSo PhanSo::TinhTich(PhanSo)
{

}

PhanSo PhanSo::TinhThuong(PhanSo)
{

}
