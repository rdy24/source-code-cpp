#include <iostream>
using namespace std;

int main() {
	int p,l,lu,kell;
	string a;
	cout << "\tMenghitung Luas atau keliling persegi panjang" << endl;
	cout << "============================================================" << endl;
	cout << "1. Luas Persegi Panjang" << endl;
	cout << "2. Keliling Persegi Panjang" << endl << endl;
	cout << "Pilih Salah satu (luas / keliling) : ";
	getline (cin,a); // memilih menghitung luas atau keliling
	cout << "============================================================" << endl;
	cout << "Masukan panjang persegi panjang : "; cin >> p;
	cout << "Masukan lebar persegi panjang : "; cin >> l;
	if(a == "luas") {
		lu = p * l;
		cout << endl << "Luas persegi panjang adalah " << lu << endl;
	} else {
		kell = 2 * (p + l);
		cout << endl << "Keliling persegi panjang adalah " << kell << endl;
	}
return 0;	
}
