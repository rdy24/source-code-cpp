#include <iostream>
using namespace std;

int luasalas(int alas, int tinggi) {
	int luas;
	luas = 2 * 0.5 * alas * tinggi;
	return luas;
}

int kellalas() {
	int s1,s2,s3,kell;
	cout << "Masukan panjang sisi 1 : "; cin >> s1;
	cout << "Masukan panjang sisi 2 : "; cin >> s2;
	cout << "Masukan panjang sisi 3 : "; cin >> s3;
	kell = s1 + s2 + s3;
	return kell;
}

int luas(int alas, int tinggi, int tinggi2) {
	int hasil;
	hasil = luasalas(alas,tinggi) + (kellalas() * tinggi2);
	return hasil;
}

main() {
	int a,b,c,d;
	cout << "1. Luas" << endl;
	cout << "2. Keliling" << endl;
	cout << "Masukan pilihan : "; cin >> d;
	cout << endl;
	switch(d) {
		case 1:
			cout << "Alas : "; cin >> a;
			cout << "Tinggi alas : "; cin >> b;
			cout << "Tinggi Prisma : "; cin >> c;
			cout << "Luas prisma segitiga = " << luas(a,b,c);
		break;
		case 2:
			cout << "Keliling segitiga = " << kellalas() << endl;
		break;
	}
return 0;
}
