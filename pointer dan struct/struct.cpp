#include <iostream>
using namespace std;

main() {
	struct mahasiswa {
		int nim;
		string nama;
		float nilai;
	};
	
	mahasiswa data[10];
	int i;
	string a;
	
	for(i = 0; i < 10;i++) {
		cout << "NIM : "; cin >> data[i].nim;
		fflush(stdin);
		cout << "Nama : "; getline(cin,data[i].nama);
		cout << "Nilai Test : "; cin >> data[i].nilai;
		
		cout << "Ada data lagi (y/t) : "; cin >> a;
		cout << endl;
		if (a == "t") {
			goto tampil;
		}
	}
	tampil:
		cout << "Data Mahasiswa yang telah diinputkan" << endl;
		cout << "NIM\tNama\t\t\tNilai" << endl;
		for(int j = 0; j <= i;j++) {
			cout << data[j].nim << "\t" << data[j].nama<< "\t" << data[j].nilai << endl;
			cout << endl;
	}
}
