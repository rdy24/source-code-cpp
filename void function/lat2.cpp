#include <iostream>
using namespace std;

void luas(int r) {
	double p = 3.14,l;
	l = p * r * r;
	cout << "Luas = " << l;
}

void kell(int r) {
	double p = 3.14,k;
	k = 2 * p * r;
	cout << "Keliling = " << k;
}

int main() {
	int x;
	cout << "Masukan jari jari : "; cin >> x;
	luas(x); cout << endl;
	kell(x);
}
