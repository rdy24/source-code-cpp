#include <iostream>
using namespace std;

void pola(int c) {
	int a,b,x,y;
	for(a = 1;a <= c;a++) {
		for(b = 1;b <= a;b++) {
			cout << "* ";	
		}
		cout << endl;
	}
	for(x = 2;x <= c;x++) {
		for(y = c;y >= x;y--) {
			cout << "* ";
		}
		cout << endl;
	} 
}

int main() {
	int a;
	cout << "Masukan tingkatan = "; cin >> a;
	pola(a);
}
