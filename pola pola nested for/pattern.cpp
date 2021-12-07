#include <iostream>
using namespace std;

int main () {
	// fn = fn1 + fn2
	int a,fn,fn1,fn2;
	cout << "Selamat datang di program deret fibonacci" << endl << endl;
	cout << "Silahkan masukan banyak deret : ";
	cin >> a;
	
	fn1 = 1;
	fn2 = 0;
	cout << fn2 << " ";
	cout << fn1 << " ";
	for (int i = 1; i <= a; i++) {
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		cout << fn << " ";
	}
	 
}
