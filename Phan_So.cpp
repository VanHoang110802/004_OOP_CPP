/*
Nhập 1 phân số, cho biết xem phân số đó là âm hay dương hay bằng không.
*/

#include <iostream>
using namespace std;

class PhanSo
{
private:
	int tuSo, mauSo;
public:
	void Nhap();
	void Xuat();
	double kiemTra();
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

double PhanSo::kiemTra()
{
	double ans = (double)this->tuSo / this->mauSo;
	return ans;
}

int main()
{
	PhanSo ps;
	ps.Nhap();
	ps.Xuat();
	double check = ps.kiemTra();
	if (check == 0) cout << "\nPhan so khong am khong duong";
	else if (check < 0) cout << "\nLa phan so am";
	else cout << "\nLa phan so duong";
	return 0;
}
