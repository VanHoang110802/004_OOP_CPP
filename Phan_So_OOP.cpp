#include <iostream>
using namespace std;

class PhanSo
{
private:
	int tuSo, mauSo;
public:
	void Nhap();
	void Xuat();
	double KiemTraPhanSo();
};

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> this->tuSo;
	do
	{
		cout << "Nhap mau so: ";
		cin >> this->mauSo;
		if (this->mauSo == 0) cout << "\nMau so phai khac 0\n";
	} while (this->mauSo == 0);
}

void PhanSo::Xuat()
{
	cout << "Phan so vua nhap: " << this->tuSo << '/' << this->mauSo;
}

double PhanSo::KiemTraPhanSo()
{
	double ans = (double)this->tuSo / this->mauSo;
	return ans;
}

int main()
{
	PhanSo pS;
	pS.Nhap();
	pS.Xuat();
	double check = pS.KiemTraPhanSo();
	if (check == 0) cout << "\nPhan so khong am khong duong";
	else if (check < 0) cout << "\nLa phan so am";
	else cout << "\nLa phan so duong";
	return 0;
}
