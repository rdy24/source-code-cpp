#include <iostream>
using namespace std;

int main() {
	int b;
	float phi = 3.14,a,l,t,m1,m2,p,r,lu,kell;
	string hi;
	cout << "\tProgram menghitung bangun datar" << endl;
	cout << "==============================================" << endl;
	cout << "1. Segitiga" << endl;
	cout << "2. Persegi Panjang" << endl;
	cout << "3. Lingkaran" << endl;
	cout << "Masukan pilihan bangun datar : "; cin >> b;
	cout << "==============================================" << endl;
	switch(b) {
		case 1:
			cout << "Menghitung luas dan kelling segitiga" << endl;
			cout << "Pilih (luas / keliling) : "; cin >> hi;
			if(hi == "luas") {
				cout << "Masukan panjang alas : "; cin >> a;
				cout << "Masukan tinggi : "; cin >> t;
				lu = (a * t) / 2;
				cout << "Luas segitiga adalah " << lu << " cm" << endl;
			} else {
				cout << "Masukan sisi alas : "; cin >> a;
				cout << "Masukan sisi miring 1 : "; cin >> m1;
				cout << "Masukan sisi miring 2 : "; cin >> m2;
				kell = a + m1 + m2;
				cout << "Keliling segitiga adalah " << kell << " cm" << endl;
			}
			break;
			case 2:
				cout << "Menghitung luas dan keliling persegi panjang" << endl;
				cout << "Pilih (luas / keliling) : "; cin >> hi;
				cout << "Masukan panjang : "; cin >> p;
				cout << "Masukan lebar: "; cin >> l;
				if(hi == "luas") {
					lu = p * l;
					cout << "Luas persegi panjang adalah " << lu << " cm" << endl;
				} else {
					kell = 2 * (p + l);
					cout << "Keliling persegi panjang adalah " << kell << " cm" << endl;
				}
			break;
			case 3:
				cout << "Menghitung luas dan keliling lingkaran" << endl;
				cout << "Pilih (luas / keliling) : "; cin >> hi;
				cout << "Masukan jari jari : "; cin >> r;
				if(hi == "luas") {
					lu = phi * r * r;
					cout << "Luas Lingkaran adalah " << lu << " cm" << endl;
				} else {
					kell = 2 * phi * r;
					cout << "Keliling Lingkaran adalah " << kell << " cm" << endl;
				}
			break;
			default:
				cout << "Pilihan anda tidak tersedia";
		}
return 0;	
}
