#include <iostream>
using namespace std;

int main() {
	int a,si,ti,p,l;
	cout << "1. Persegi" << endl;
	cout << "2. Persegi panjang" << endl;
	cout << "3. Segitiga" << endl << endl;
	cout << "Masukan pilihan anda : "; cin >> a;
	cout << endl;
	switch(a) {
		case 1:
			cout << "Masukan panjang sisi : "; cin >> si;
			for (int i = 1;i <= si;i++) {
				for (int j = 1;j <= si;j++) {
					cout << "* ";
				} 
				cout << endl;
			}
		break;
		case 2:
			cout << "Masukan panjang : "; cin >> p;
			cout << "Masukan lebar   : "; cin >> l;
			for (int i = 1;i <= p;i++) {
				for (int j = 1;j <= l;j++) {
					cout << "* ";
				}
				cout << endl;
			}
		break;
		case 3:
			cout << "Masukan tinggi segitiga : "; cin >> ti;
			for (int i = 1;i <= ti;i++) {
				for (int j = 1;j <= i;j++) {
					cout << "* ";
				}
				cout << endl;
			}
		break;
	}
}
