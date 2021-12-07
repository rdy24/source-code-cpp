#include <iostream>
using namespace std;

int main() {
	int jml,a,b,c;
	cout << "Masukan angka : "; cin >> a;
	cout << endl;
	for(b = 1;b <= a;b++) {
		jml = 0;
		for(c = a;c >= b;c--) {
			cout << c;
			if (c <= b) {
				cout << "";
			} else {
				cout << " + ";
			}
			jml += c;
		}
	cout << " = " << jml << endl;
	}
}
