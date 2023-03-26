#include <iostream>
using namespace std;

class PhanSo
{
private:
	int tuSo, mauSo;
public:
	PhanSo(void); // Mac dinh khong tham so
	PhanSo(int, int); // Mac dinh co tham so
	PhanSo(int);
	PhanSo(const PhanSo&); // Sao chep
	~PhanSo(void); // Pha huy

	void Nhap();
	void Xuat();
	PhanSo TongPhanSo(PhanSo);
};

PhanSo::PhanSo(void) // mac dinh
{
	this->tuSo = 0;
	this->mauSo = 1; // vì mẫu số luôn phải khác 0
}

PhanSo::PhanSo(int tu, int mau)
{
	this->tuSo = tu;
	this->mauSo = mau;
}

// hãy luôn để ý kỹ đề bài, nếu mà nhập 1 số thôi thì mặc định mẫu số = 1 luôn
PhanSo::PhanSo(int tu)
{
	this->tuSo = tu;
	this->mauSo = 1;
}

PhanSo::PhanSo(const PhanSo& ps)
{
	this->tuSo = ps.tuSo;
	this->mauSo = ps.mauSo;
}

PhanSo::~PhanSo(void) // Pha huy
{

}

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> this->tuSo;
	cout << "Nhap mau so: "; // mặc định ta cứ coi như đầu vào là luôn đúng
	cin >> this->mauSo;
}

void PhanSo::Xuat()
{
	cout << this->tuSo << '/' << this->mauSo << '\n';
}

PhanSo PhanSo::TongPhanSo(PhanSo ps)
{
	PhanSo tongPhanSo;
	tongPhanSo.tuSo = this->tuSo * ps.mauSo + this->mauSo * ps.tuSo;
	tongPhanSo.mauSo = this->mauSo * ps.mauSo;
	return tongPhanSo;
}

int main()
{
	PhanSo a;
	a.Xuat();
	PhanSo b(1, 2);
	b.Xuat();
	PhanSo c(3, 4);
	c.Xuat();
	PhanSo d(3);
	d.Xuat();
	PhanSo e(-5);
	e.Xuat();
	PhanSo f(c);
	f.Xuat();
	a = b.TongPhanSo(c);
	a.Xuat();
	return 0;
}
