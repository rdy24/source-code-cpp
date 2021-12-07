#include <iostream>
using namespace std;

int main () {
	int a,fn,fn1 = 1,fn2 = 0,hasil = 0;
	cout << "Selamat datang di program deret fibonacci" << endl << endl;
	cout << "Silahkan masukan banyak deret : "; cin >> a;
	for (int i = 1; i <= a; i++) {
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		cout << fn << " ";
		hasil +=fn;
	}
	cout << "Hasil " << hasil;
return 0;
}
