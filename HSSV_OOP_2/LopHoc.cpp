#include "LopHoc.h"

void NhapDanhSachLop(SinhVien* arrSinhVien, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "\n\n\t\t* Nhap Thong Tin Sinh Vien Thu " << i + 1 << " *\n";
		arrSinhVien[i].Nhap();
	}
}

void XuatDanhSachLop(SinhVien* arrSinhVien, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "\n\n\t\t* Thong Tin Sinh Vien Thu " << i + 1 << " *\n";
		arrSinhVien[i].Xuat();
	}
}

double TimDiemThiCaoNhat(SinhVien* arrSinhVien, int n)
{
	// double DiemMax = arr[0].diemThi; // lỗi vì diemThi thuộc về private, mà đã thuộc về private thì có nghĩa là diemThi chỉ có tầm vực trong class thôi, nếu bên ngoài sẽ không có thể truy xuất được
	// lúc này ta sẽ dùng đến phương thức GETTER

	double diemMax = arrSinhVien[0].LayDiemThi();
	for (int i = 1; i < n; i++)
	{
		if (arrSinhVien[i].LayDiemThi() > diemMax)
		{
			diemMax = arrSinhVien[i].LayDiemThi();
		}
	}
	return diemMax;
}

template <class T>
void HoanVi(T& a, T& b)
{
	T Temp = a;
	a = b;
	b = Temp;
}

void SapTangDanTheoTen(vector<SinhVien>& arr)
{
	int n = arr.size();

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i].LayHoTen() > arr[j].LayHoTen())
			{
				HoanVi<SinhVien>(arr[i], arr[j]);
			}
		}
	}
}
