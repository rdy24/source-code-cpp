#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "masukan panjang pola : "; cin >> a;
	cout << "pola 5" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = a; j > i; j--) {
		cout << " ";
		}
		for (int k = 1; k <= (2*i -1); k++){
			cout << "*";
		}
	cout << endl;
	}
	cout << "pola 6" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j < i; j++) {
		cout << " ";
		}
		for (int k = a; k >= (2*i -a); k--){
			cout << "*";
		}
	cout << endl;
	}
	cout << "pola 7" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = a; j > i; j--) {
		cout << " ";
		}
		for (int k = 1; k <= (2*i -1); k++){
			cout << "*";
		}
	cout << endl;
	}
	for (int i = 2; i <= a; i++) {
		for (int j = 1; j < i; j++) {
		cout << " ";
		}
		for (int k = a; k >= (2*i -a); k--){
			cout << "*";
		}
	cout << endl;
	}
	return 0;
}
