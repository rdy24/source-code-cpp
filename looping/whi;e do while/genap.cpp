#include <iostream>
using namespace std;

int main() {
	int a, b = 1;
	while (b > 0) {
		cout << "Masukan Bilangan Genap = "; cin >> a;
		if (a % 2 == 0) {
			cout << "Benar" << endl;
		} else {
			cout << "Salah" << endl << "Program selesai" << endl;
			break;
		}
	}
}
