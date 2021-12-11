#include <iostream>
using namespace std;

void persegipanjang(int p,int l) {
	int kell,luas;
	kell = 2 * (p + l);
	luas = p * l;
	cout << endl;
	cout << "Keliling persegi panjang : " << kell << endl;
	cout << "Luas Persegi Panjang     : " << luas << endl;
}

int persegi(int s) {
	int kell,luas;
	kell = 4 * s;
	luas = s * s;
	cout << endl;
	cout << "Keliling persegi : " << kell << endl;
	cout << "Luas Persegi     : " << luas << endl;
	return kell,luas;
}

int main() {
	int p,l,s,a;
	do {
		cout << "\nPilih Menu" << endl;
		cout << "1. Persegi Panjang" << endl;
		cout << "2. Persegi" << endl;
		cout << "Masukan Pilihan : "; cin >> a;
		cout << endl;
		switch(a) {
			case 1:
				cout << endl;
				cout << "Masukan Panjang : "; cin >> p;
				cout << "Masukan Lebar   : "; cin >> l;
				persegipanjang(p,l);
			break;
			case 2:
				cout << endl;
				cout << "Sisi Persegi : "; cin >> s;
				persegi(s);
			break;
			default:
				cout << "pilihan tidak ada" <<endl;
		}
	} while(a != 1 && a != 2);
	
}
