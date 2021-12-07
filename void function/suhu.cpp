#include <iostream>
using namespace std;

void celcius(int  k) {
	double c;
	c = k - 273;
	cout << "Hasil konversi Kelvin ke Celcius = " << c;
}

void reamur(int k) {
	double r;
	r = 0.8 * (k - 273);
	cout << "Hasil konversi Kelvin ke Reamur = " << r;
}

void fahrenheit(int k) {
	double f;
	f = 1.8 * (k - 273) + 32;
	cout << "Hasil konversi Kelvin ke Fahrenheit = " << f;
}

int main() {
	int a,k;
	string b;
	cout << "\t\tProgram konversi suhu Kelvin" << endl << endl;
	ulangi:
	cout << "Masukan suhu kelvin : "; cin >> k;
	cout << endl;
	cout << "1. Kelvin ke Celcius" << endl;
	cout << "2. Kelvin ke Reamur" << endl;
	cout << "3. Kelvin ke Fahrenheit" << endl << endl;
	cout << "Masukan pilihan anda : "; cin >> a;
	cout << endl;
	switch (a) {
		case 1:
			celcius(k);
			break;
		case 2:
			reamur(k);
			break;
		case 3:
			fahrenheit(k);
			break;
		default:
			cout << "Pilihan tidak ditemukan";
	}
	cout << endl << "Konversi lagi ? (yes / no) : "; cin >> b;
	if(b == "yes") {
		goto ulangi;
	} else {
		cout << "Terima kasih";
	}
	return 0;
}
