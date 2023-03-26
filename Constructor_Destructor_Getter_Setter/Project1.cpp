#include <iostream>
#include <math.h>
using namespace std;
class Diem
{
private:
	int toaDoX, toaDoY;
public:
	Diem(void);
	Diem(int, int);
	Diem(const Diem&);
	~Diem(void);

	int GetterToaDoX();
	int GetterToaDoY();
	void SetterToaDoX(int);
	void SetterToaDoY(int);

	void Nhap();
	void Xuat();
	float TinhKhoangCach(Diem);
};

Diem::Diem(void) // hàm khởi tạo không có tham số
{
	this->toaDoX = 0;
	this->toaDoY = 0;
}

Diem::Diem(int x, int y) // hàm khởi tạo có tham số
{
	this->toaDoX = x;
	this->toaDoY = y;
}

Diem::Diem(const Diem &a)
{
	this->toaDoX = a.toaDoX;
	this->toaDoY = a.toaDoY;
}

void Diem::Nhap()
{
	cout << "\nNhap hoanh do: ";
	cin >> this->toaDoX;
	cout << "\nNhap tung do: ";
	cin >> this->toaDoY;
}

void Diem::Xuat()
{
	cout << '(' << this->toaDoX << ',' << this->toaDoY << ')';
}

float Diem::TinhKhoangCach(Diem d)
{
	return sqrt(pow(this->toaDoX - d.toaDoX, 2) + pow(this->toaDoY - d.toaDoY, 2));
}

// làm getter, setter bên này cực vl, bên c# 1 nhấp chuột phải là sướng đến chín tầng mây:)
int Diem::GetterToaDoX()
{
	return this->toaDoX;
}

int Diem::GetterToaDoY()
{
	return this->toaDoY;
}

void Diem::SetterToaDoX(int hoanhDo)
{
	this->toaDoX = hoanhDo;
}

void Diem::SetterToaDoY(int tungDo)
{
	this->toaDoY = tungDo;
}

Diem::~Diem() // luôn luôn để hàm hủy ở cuối cùng.
{
	// để rỗng vì không có con trỏ
}

int main()
{
	Diem d1(1, 2);
	Diem d2(5, 8);
	Diem d3; // 0, 0
	Diem d4(d1); 

	cout << "d1: "; d1.Xuat();
	cout << "\nd2: "; d2.Xuat();
	cout << "\nd3: "; d3.Xuat();
	cout << "\nd4: "; d4.Xuat();

	float kc = d1.TinhKhoangCach(d2);
	cout << '\n' << kc;
	return 0;
}
