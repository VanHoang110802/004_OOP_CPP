#include "PhanSo.h"

void PhanSo::Nhap()
{
	cout << "Nhap tu so: "; 
	cin >> this->tuso;
	do
	{
		cout << "Nhap mau so: "; cin >> this->mauso;
		if (this->mauso == 0) cout << "\nMau so nhap khong hop le!\n";
	} while (this->mauso == 0);
}

void PhanSo::Xuat()
{
	if (this->mauso < 0) 
		this->mauso *= -1, this->tuso *= -1;

	cout << this->tuso << '/' << this->mauso;
}

double PhanSo::TinhKetQuaPhanSo()
{
	return (double)this->tuso / this->mauso;
}

int __gcd(int a, int b)
{
	if (a < 0) 
		a *= -1;

	if (b < 0) 
		b *= -1;

	if (a == 0 && b != 0)
		return b;

	if (b == 0 && a != 0)
		return a;

	int MIN = min(a, b), MAX = max(a, b);

	if (MAX % MIN == 0)
		return MIN;

	for (int i = MIN / 2; i >= 1; --i) 
		if (MIN % i == 0 && MAX % i == 0) 
			return i;
}

void PhanSo::RutGon()
{
	int temp = __gcd(this->tuso, this->mauso);
	this->tuso /= temp;
	this->mauso /= temp;
}

PhanSo PhanSo::TinhTong(PhanSo ps)
{
	PhanSo Tong;
	Tong.tuso = this->tuso * ps.mauso + this->mauso * ps.tuso;
	Tong.mauso = this->mauso * ps.mauso;
	return Tong;
}

PhanSo PhanSo::TinhHieu(PhanSo ps)
{
	PhanSo Hieu;
	Hieu.tuso = this->tuso * ps.mauso - this->mauso * ps.tuso;
	Hieu.mauso = this->mauso * ps.mauso;
	return Hieu;
}

PhanSo PhanSo::TinhTich(PhanSo ps)
{
	PhanSo Tich;
	Tich.tuso = this->tuso * ps.tuso;
	Tich.mauso = this->mauso * ps.mauso;
	//Tich.mauso = (*this).mauso * ps.mauso;
	return Tich;
}

PhanSo PhanSo::TinhThuong(PhanSo ps)
{
	PhanSo NghichDao;
	NghichDao.tuso = ps.mauso;
	NghichDao.mauso = ps.tuso;
	return (*this).TinhTich(NghichDao);
}

bool PhanSo::KiemTraHaiPhanSo(PhanSo ps)
{
	double ps1 = (double)(*this).tuso / (*this).mauso;
	double ps2 = (double)ps.tuso / ps.mauso;

	return (ps1 > ps2) ? true : false;
}
