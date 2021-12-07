#include <iostream>
using namespace std;

int main() {
	int pe,ga;
	cout << "\t\tSistem Gaji" << endl << endl;
	cout << "Masukan Jumlah Pendapatan : "; cin >> pe; // input pendapatan
	cout << endl;
	if(pe < 20000) { // jika pendapatan kurang dari 20000
		cout << "komisi anda 10%" << endl << endl; 
		ga = 0.1 * pe; // hitung gaji 10% dari pendapatan
		cout << "gaji anda " << ga; 
	} else if(pe > 20000 && pe < 50000) { // jika pendapatan diatas 20000 tapi tidak lebih dari 50000
		cout << "komisi anda 15% ditambah 5000" << endl << endl; 
		ga = (0.15 * pe) + 5000; // hitung gaji 15% dari pendapatan dan ditambah bonus 5000
		cout << "gaji anda " << ga; 
	} else if(pe > 50000 && pe < 100000) { // jika pendapatan diatas 50000 tapi tidak lebih dari 100000
		cout << "komisi anda 20% ditambah 10000" << endl << endl; 
		ga = (0.2 * pe) + 10000; // hitung gaji 20% dari pendapatan dan ditambah bonus 10000
		cout << "gaji anda " << ga; 
	} else { // jika pendapatan diatas 100000
		cout << "komisi anda 25% ditambah 20000" << endl << endl; 
		ga = (0.25 * pe) + 20000; // hitung gaji 25% dari pendapatan dan ditambah bonus 20000
		cout << "gaji anda " << ga; 
	}
return 0;
}
