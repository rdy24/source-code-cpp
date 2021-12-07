#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "\t\tPengelompokan Umur" << endl << endl;
	cout << "Masukan umur : "; cin >> a;
	cout << endl;
	if(a >= 0 && a <= 5) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Balita";
	} else if (a >= 6 && a <= 11) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Kanak-Kanak";
	} else if (a >= 12 && a <= 16) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Remaja Awal";
	} else if (a >= 17 && a <= 25) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Remaja Akhir";
	} else if (a >= 26 && a <= 35) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Dewasa Awal";
	} else if (a >= 36 && a <= 45) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Dewasa Akhir";
	} else if (a >= 46 && a <= 55) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Lansia Awal";
	} else if (a >= 56 && a <= 65) {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Lansia Akhir";
	} else {
		cout << "Umur " << a << " tahun Termasuk dalam Masa Manula";
	}
return 0;
}
