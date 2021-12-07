#include <iostream>
using namespace std;

int main() {
	int data;
	cout << "Masukan banyak data = "; cin >> data;
	cout << endl;
	cout << "Bilangan GENAP antara 1 s/d " << data << " adalah : " << endl;
	for(int i = 1;i <= data;i++) {
		if (i % 2 == 0) {
			cout << i << "\t";
		}
	}
	cout << endl << endl;
	cout << "Bilangan ganjil antara 1 s/d " << data << " adalah : " << endl;
	for(int i = 1;i <= data;i++) {
		if (i % 2 == 1) {
			cout << i << "\t";
		}
	}
return 0;
}
