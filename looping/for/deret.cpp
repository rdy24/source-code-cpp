#include <iostream>
using namespace std;

int main () {
	int a,b,c,hasil = 0;
	cout << "\tProgram deret kelipatan" << endl << endl;
	cout << "Masukan kelipatan yang anda inginkan : "; cin >> a;
	cout << "Masukan panjang deret : "; cin >> b;
	cout << endl;
	c = a;
	for (int i = 1; i <= b; i++) {
		cout << c << " ";
		hasil += c;
		c += a;
	}
	cout << endl << endl;
	cout << "Jumlah deret kelipatan " << a << " diatas = " << hasil << endl;
return 0;
}
