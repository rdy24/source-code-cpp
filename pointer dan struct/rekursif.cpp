#include <iostream>
using namespace std;

int fibo(int bilangan) {
	if(bilangan < 2) {
		return bilangan;
	} else {
		return fibo(bilangan - 1) + fibo(bilangan - 2);
	}
}

main() {
	int a;
	cout << "Masukan Batas Bilangan fibonaci : "; cin >> a;
	cout << "\nHasil Bilangan Fibonacci :" << endl;
	for(int i = 0;i <= a;i++) {
		cout << fibo(i) << " ";
	}
}
