#include <iostream>
#include <string>
using namespace std;
// std::cin std::cout
struct HocSinh
{
	string Ten;
	float DiemToan, DiemVan;
};

void NhapThongTin(HocSinh &hs)
{
	do{
		cout << "\nNhap diem toan: ";
		cin >> hs.DiemToan;

		if(hs.DiemToan < 0 || hs.DiemToan > 10)
		{
			cout << "\nDiem toan khong hop le. Xin kiem tra lai !";
		}
	}while(hs.DiemToan < 0 || hs.DiemToan > 10);

	do{
		cout << "\nNhap diem van: ";
		cin >> hs.DiemVan;

		if(hs.DiemVan < 0 || hs.DiemVan > 10)
		{
			cout << "\nDiem van khong hop le. Xin kiem tra lai !";
		}
	}while(hs.DiemVan < 0 || hs.DiemVan > 10);

	fflush(stdin); // Xóa bộ nhớ đệm.
	cout << "\nNhap ten: ";
	getline(cin, hs.Ten);
}

void XuatThongTin(HocSinh hs)
{
	cout << "\nTen: " << hs.Ten;
	cout << "\nDiem toan: " << hs.DiemToan;
	cout << "\nDiem van: " << hs.DiemVan;
}

float TinhDiemTrungBinh(HocSinh hs)
{
	return (hs.DiemToan + hs.DiemVan) / 2;
}

int main()
{
	HocSinh hs;
	NhapThongTin(hs);
	XuatThongTin(hs);

	float Dtb = TinhDiemTrungBinh(hs);
	cout << "\nDiem trung binh = " << Dtb;
  
	return 0;
}
