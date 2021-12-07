#include <iostream>
using namespace std;

int main() {
	int a, b = 1, c = 1;
	cout << "Masukan nilai a : "; cin >> a;
	cout << "Angka c bernilai : " << c << endl;
	cout << "Angka b bernilai : " << b << endl;
	cout << "nilai a akan diulang sebanyak perbandingan c dengan b : " << endl;
	while (c < b) {
		cout << a << endl;
		c++;
	}
return 0;
}
