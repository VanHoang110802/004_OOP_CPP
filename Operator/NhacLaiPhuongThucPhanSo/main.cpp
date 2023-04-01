#include <iostream>
using namespace std;
 
class PhanSo
{
private:
	int tuSo, mauSo;
public:
	PhanSo(void);
	PhanSo(int, int);
	PhanSo(const PhanSo &);
	~PhanSo(void);
	void Nhap();
	void Xuat();
	PhanSo Tong2PhanSo(PhanSo);
};
 
PhanSo::PhanSo() // mac dinh
{
	this->tuSo = 0;
	this->mauSo = 1;
}
 
PhanSo::PhanSo(int ts, int ms)
{
	this->tuSo = ts;
	this->mauSo = ms;
}
 
PhanSo::PhanSo(const PhanSo &ps) // mac dinh co san nhung thoi cai cho no nho :vv
{
	this->tuSo = ps.tuSo;
	this->mauSo = ps.mauSo;
}
 
void PhanSo::Nhap()
{
	cout << "Nhap tu so: "; cin >> this->tuSo;
	do
	{
		cout << "Nhap mau so: "; cin >> this->mauSo;
		if (this->mauSo == 0)
			cout << "Mau nhap deo hop le!";
	} while (this->mauSo == 0);
}
 
void PhanSo::Xuat()
{
	cout << this->tuSo << '/' << this->mauSo;
}
 
PhanSo PhanSo::Tong2PhanSo(PhanSo ps)
{
	PhanSo tong(this->tuSo * ps.mauSo + this->mauSo * ps.tuSo, this->mauSo * ps.mauSo);
	//PhanSo tong;
	//tong.tuSo = this->tuSo * ps.mauSo + this->mauSo * ps.tuSo;
	//tong.mauSo = this->mauSo * ps.mauSo;
	return tong;
}
 
PhanSo::~PhanSo(void)
{
 
}
 
int main()
{
	PhanSo ps1(1, 2), ps2(3, 4), tong;
	tong = ps1.Tong2PhanSo(ps2);
	tong.Xuat();
	return 0;
}
