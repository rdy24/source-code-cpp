#include <iostream>
using namespace std;

int main() {
	int a,b,s,lu,kell,l;
	cout << "Masukan sisi persegi : "; cin >> s;
	cout << "lebar : "; cin >> l;
	cout << endl;
	for (a = 1;a <= l;a++) {
		for (b = 1;b <= s;b++) {
			if (a == 1 || a == l || b == 1 || b == s) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
	cout << endl;
	}
	/*lu = s * s;
	kell = 4 * s;
	cout << endl;
	cout << "Luas dari persegi diatas adalah " << lu << endl << endl;
	cout << "Keliling dari persegi diatas adalah " << kell << endl;*/
}
