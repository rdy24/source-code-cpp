#include <iostream>
using namespace std;

int main() {
	int eko = 150000,bi = 275000,ekse = 300000,p,j,t,b,k;
	cout << "\t\tITN Train" << endl;
	cout << "1. Ekonomi" << endl;
	cout << "2. Bisnis" << endl;
	cout << "3. Eksekutif" << endl;
	cout << "Masukan Pilihan Anda : "; cin >> p;
	cout << "=================================" << endl;
	switch(p) {
		case 1 :
			cout << "Kelas Ekonomi" << endl;
			cout << "Harga : Rp " << eko << endl;
			cout << "Masukan jumlah penumpang : "; cin >> j;
			t = j * eko; // menghitung total pembayaran
			cout << "Total pembayaran : Rp " << t << endl;
			cout << "Masukan pembayaran : Rp "; cin >> b;
			k = b - t; // menghitung kembalian
			cout << "Kembalian : Rp " << k;
			break;
		case 2 :
			cout << "Kelas Bisnis" << endl;
			cout << "Harga : Rp " << bi << endl;
			cout << "Masukan jumlah penumpang : "; cin >> j;
			t = j * bi; // menghitung total pembayaran
			cout << "Total pembayaran : Rp " << t << endl;
			cout << "Masukan pembayaran : Rp "; cin >> b;
			k = b - t; // menghitung kembalian
			cout << "Kembalian : Rp " << k;
			break;
		case 3 :
			cout << "Kelas Eksekutif" << endl;
			cout << "Harga : Rp " << ekse << endl;
			cout << "Masukan jumlah penumpang : "; cin >> j;
			t = j * ekse; // menghitung total pembayaran
			cout << "Total pembayaran : Rp " << t << endl;
			cout << "Masukan pembayaran : Rp "; cin >> b;
			k = b - t; // menghitung kembalian
			cout << "Kembalian : Rp " << k;
			break;
		default:
			cout << "Pilihan anda tidak tersedia";
	}	
return 0;
}
