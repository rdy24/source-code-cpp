#include <iostream>
using namespace std;

int main() {
	int po1 = 1500000,po2 = 1200000,po3 = 1000000,bo = 150000,gol,th,ma,ga;
	cout << "\tProgram gaji" << endl;
	cout << "1. Golongan 1" << endl;
	cout << "2. Golongan 2" << endl;
	cout << "3. Golongan 3" << endl;
	cout << "Masukan Golongan : "; cin >> gol;
	cout << "Masukan Tahun Masuk Kerja : "; cin >> th;
	ma = 2017 - th;
	switch (gol) {
		case 1:
			if (ma >= 7) {
			ga = po1 + bo;
			} else {
				ga = po1;
			}
			cout << "Total gaji anda : " << ga;
		break;
		case 2:
			if (ma >= 7) {
			ga = po2 + bo;
			} else {
				ga = po2;
			}
			cout << "Total gaji anda : " << ga;
		break;
		case 3:
			if (ma >= 7) {
			ga = po3 + bo;
			} else {
				ga = po3;
			}
			cout << "Total gaji anda : " << ga;
		break;
		default:
			cout << "golongan tidak tersedia";
	}
return 0;
}
