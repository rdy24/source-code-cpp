#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout << "Latihan 1.a" << endl;
	for(a = 1;a <= 3;a++) {
		for(b = 5;b <= 9;b+=2) {
			cout << b << " ";
		}
		cout << endl;	
	}
	cout << endl;
	cout << "Latihan 1.b" << endl;
	for(a = 5;a >= 1;a--) {
		for(b = 1; b <= a;b++) {
			cout << b << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Latihan 1.c" << endl;
	for(a = 1;a <= 5;a++) {
		for(b = a; b >= 1;b--) {
			cout << a << " ";
		}
		cout << endl;
	}
		cout << endl;
	cout << "Latihan 1.d" << endl;
	for(a = 1;a <= 5;a+=2) {
		for(b = a; b >= 1;b--) {
			cout << a << " ";
		}
		cout << endl;
	}
}
