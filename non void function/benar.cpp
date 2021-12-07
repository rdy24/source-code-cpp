#include <iostream>
using namespace std;

double hitung (double x, double d) {
	double h;
	h = x * d / 100;
	return h;
}

int main () {
	int b,c,e,byk;
	string a;
	cout << "Nama Barang = "; cin >> a;
	cout << "Harga Barang = "; cin >> b;
	cout << "Diskon (%) = "; cin >> c;
	e = b - hitung(b,c);
	cout << "Harga setelah diskon = " << e << endl;
	cout << "Masukan banyak barang = "; cin >> byk;
	cout << "Total = " << e * byk;
	return 0;
}
