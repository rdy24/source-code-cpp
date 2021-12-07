#include <iostream>
using namespace std;

double dolar(double a) {
	double b;
	b = 0.000071 * a;
	return b;
}

double ringgit(double a) {
	double b;
	b = 0.00029 * a;
	return b;
}

double pound(double a) {
	double b;
	b = 0.000053 * a;
	return b;
}

double real(double a) {
	double b;
	b = 0.00027 * a;
	return b;
}
int main() {
	int a,b;
	string c;
	cout << "\tKonversi Rupiah" << endl << endl;
	lagi:
	cout << "Masukan jumlah uang anda : "; cin >> a;
	cout << endl;
	cout << "1. Rupiah ke Dollar" << endl;
	cout << "2. Rupiah ke Ringgit" << endl;
	cout << "3. Rupiah ke Pound Sterling" << endl;
	cout << "4. Rupiah ke Riyal" << endl;
	cout << "Pilihan konversi : "; cin >> b;
	cout << endl;
	cout << "Hasil konversi = ";
	if(b == 1) {
		cout << "USD " << dolar(a);
	} else if(b == 2) {
		cout << "RM " << ringgit(a);	
	} else if (b == 3) {
		cout << "GBP " << pound(a);
	} else if (b == 4) {
		cout << "SR  " << real(a);
	} else {
		cout << "ERROR";
	}
	cout << endl;
	for(int i = 1;i > 0;i++) {
		cout << "Coba Lagi? (yes / no) : "; cin >> c;
		if (c == "yes") {
			goto lagi;
		} else {
			cout << "\nTerimakasih";
			break;
		}
	}
}
