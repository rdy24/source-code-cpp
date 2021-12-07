#include <iostream>
using namespace std;

int main() {
	int ph;
	cout << "\tProgram Menentukan Jenis Larutan" << endl << endl;
	cout << "Masukan Ph larutan : "; cin >> ph;
	cout << "====================================" << endl;
	switch (ph) {
		case 1 ... 6:
			cout << "Larutan Bersifat Asam";
			break;
		case 7:
			cout << "Larutan Bersifat Netral";
			break;
		case 8 ... 14:
			cout << "Larutan Bersifat Basa";
			break;
		default:
			cout << "Pilihan tidak tersedia";
	}
return 0;	
}
