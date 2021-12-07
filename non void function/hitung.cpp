#include <iostream>
using namespace std;

int jumlah(int a,int b) {
	int c;
	c = a + b;
	cout << "Hasil penjumlahan dari 2 bilangan tersebut = " << c;
	return c;
}
int kurang(int a,int b) {
	int c;
	c = a - b;
	cout << "Hasil pengurangan dari 2 bilangan tersebut = " << c;
	return c;
}
int kali(int a,int b) {
	int c;
	c = a * b;
	cout << "Hasil kali dari 2 bilangan tersebut = " << c;
	return c;
}
double bagi(double a,double b) {
	double c;
	c = a / b;
	cout << "Hasil bagi dari 2 bilangan tersebut = " << c;
	return c;
}
int main () {
	int x,y,z;
	cout << "Masukan Bilangan pertama : "; cin >> x;
	cout << "Masukan Bilangan kedua   : "; cin >> y;
	cout << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl << endl;
	ulang:
	cout << "Pilih perhitungan : "; cin >> z;
		if (z == 1) {
			jumlah(x,y);
		} else if (z == 2) {
			kurang(x,y);
		} else if (z == 3) {
			kali(x,y);
		} else if (z == 4) {
			bagi(x,y);
		} else {
			cout << "Error" << endl;
			goto ulang;
		}
return 0;
}
