#include <iostream>
using namespace std;

void ganjilgenap(int a) {
	if(a % 2 == 0) {
		cout << a << " Bilangan Genap";
	} else {
		cout << a << " Bilangan Ganjil";
	}
}

main() {
	int a;
	cout << "Cek Bilangan Ganjil Genap" << endl;
	cout << "Masukan Bilangan : "; cin >> a;
	ganjilgenap(a);
}
