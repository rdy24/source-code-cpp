#include <iostream>
using namespace std;

int main() {
	int a,b;
	float c;
	string operasi;
	cout << "\tKalkulator Sederhana" << endl;
	cout << "====================================" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "====================================" << endl;
	cout << "Pilih Operasi : "; getline (cin,operasi);
	cout << endl;
	cout << "Masukan nilai pertama : "; cin >> a;
	cout << "Masukan nilai kedua   : "; cin >> b;
	cout << endl;
	if(operasi == "penjumlahan") {
		c = a + b;
		cout << a << " ditambah " << b << " hasilnya " << c;
	} else if(operasi == "pengurangan") {
		c = a - b;
		cout << a << " dikurangi " << b << " hasilnya " << c;
	} else if(operasi == "perkalian") {
		c = a * b;
		cout << a << " dikali " << b << " hasilnya " << c;
	} else {
		c = a / b;
		cout << a << " dibagi " << b << " hasilnya " << c;
	}
return 0;	
}
