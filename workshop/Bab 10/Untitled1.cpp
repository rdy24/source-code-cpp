#include <iostream>
using namespace std;

main() {
	int a,nilai[a];
	cout << "Masukan Banyak data : ";cin >> a;
	cout << endl;
	string nama[a],status[a];
	for(int i = 0;i < a;i++) {
		cout << "Data ke - " << i+1 << endl;
		cout << "Masukan Nama : ";cin >> nama[i];
		cout << "Masukan Nilai : ";cin >> nilai[i];
		cout << endl;
		if(nilai[i] >= 70 && nilai[i] <= 100) {
			status[i] = "Lulus";
		} else if(nilai[i] < 70) {
			status[i] = "Tidak lulus";
		} else {
			status[i] = "Nilai Lebih dari 100";
		}
	}
	cout << "Daftar Nilai Mahasiswa" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "No\tNama\tNilai\tStatus         " << endl;
	cout << "-------------------------------------------------" << endl;
	for(int i = 0;i< a;i++) {
		cout << i+1 << "\t" << nama[i] << "\t" << nilai[i] << "\t" << status[i] << endl;
		cout << "-------------------------------------------------" << endl;
	}
}
