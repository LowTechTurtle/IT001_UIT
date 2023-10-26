#include<bits/stdc++.h>
typedef struct {
	int num;
	int deno;
} PhanS;
typedef PhanS* PhanSo;

void Nhap(PhanSo a) {
	a = (PhanSo)calloc(1, sizeof(PhanS));
	std::cin >> (a -> num);
	std::cin >> (a -> deno);
}

PhanSo Nhap() {
	PhanSo x;
	x = (PhanSo)calloc(1, sizeof(PhanS));
	std::cin >> x -> num;
	std::cin >> x -> deno;
	return x;
}

int SoSanh(PhanSo a, PhanSo b) {
	if (a -> num/a -> deno > b -> num/b -> deno) {
		return 1;
	} else if (a -> num/a -> deno < b -> num/b -> deno) {
		return -1;
	} else {
		return 0;
	}
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
