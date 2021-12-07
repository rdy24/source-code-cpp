#include <iostream>
using namespace std;

void proses(int a) {
	int nilai[a];
	double jml = 0;
	string nama[a];
	for(int i = 0;i < a;i++) {
		cout << "Masukan Nama siswa : "; cin >> nama[i];
	}
	cout << "\nInput Nilai" << endl << endl;
	for(int i = 0; i < a;i++) {
		cout << nama[i] << " : "; cin >> nilai[i];
		jml += nilai[i];
	}
	cout << "\nJumlah Nilai = " << jml << endl;
	cout << "Rata Rata = " << jml / a << endl << endl;
	cout << "Siswa yang tidak lulus" << endl << endl;
	for(int i = 0;i < a;i++) {
		if(nilai[i] <= 75) {
			cout << nama[i] << " = "<< nilai[i] << endl;
		}
	}
}

int main() {
	int a;
	cout << "Masukan banyak siswa : "; cin >> a;
	cout << endl;
	proses(a);
}
