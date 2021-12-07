#include <iostream>
using namespace std;

int main() {
	int a,b = 1,c;
	string d;
	cout << "\tProgram cek kelipatan" << endl;
	while (b > 0) {
		cout << "Masukan kelipatan yang ingin dicek : "; cin >> a;
		cout << endl;
		cout << "Cek kelipatan " << a << endl;
		cout << endl;
		cout << "Masukan sebuah bilangan : "; cin >> c;
		cout << endl;
			if(c % a == 0) {
				cout << c << " Merupakan Kelipatan " << a << endl;
			} else {
				cout << c << " Bukan Kelipatan " << a << endl;
			}
		cout << endl;
		cout << "Lagi? (yes / no) : "; cin >> d;
			if (d == "yes") {
				cout << endl;
				continue;
			} else {
				break;
			}
	b++;
	}
return 0;
}

