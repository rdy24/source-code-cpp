#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "masukan panjang pola : "; cin >> a;
	cout << "pola 1" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j < i; j++) {
		cout << " ";
		}
		for (int k = a; k >= i; k--){
			cout << "*";
		}
	cout << endl;
	}
	cout << "pola 2" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = a; j > i; j--) {
		cout << " ";
		}
		for (int k = 1; k <= i; k++){
			cout << "*";
		}
	cout << endl;
	}
	return 0;
}
