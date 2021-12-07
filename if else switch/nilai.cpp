#include <iostream>
using namespace std;

int main() {
	int nilai;
	cout << "\tSistem Nilai" << endl;
	cout << "Masukan Nilai Anda : "; cin >> nilai;
	switch (nilai) {
		case 90 ... 100:
			cout << "Nilai " << nilai << " Termasuk dalam Kategori A";
		break;
		case 80 ... 89:
			cout << "Nilai " << nilai << " Termasuk dalam Kategori B";
		break;
		case 70 ... 79:
			cout << "Nilai " << nilai << " Termasuk dalam Kategori C";
		break;
		case 60 ... 69:
			cout << "Nilai " << nilai << " Termasuk dalam Kategori D";
		break;
		case 0 ... 59:
			cout << "Nilai " << nilai << " Termasuk dalam Kategori E";
		break;
		default:
			cout << "Inputan Tidak Valid";
	}
return 0;
}
