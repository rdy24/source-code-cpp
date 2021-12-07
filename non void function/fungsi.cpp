#include <iostream>
using namespace std;

int hasil(int x){
	int a;
	a = x * x - 5 * x + 5;
	return a;
}

int main() {
	int x;
	cout << "Masukan nilai x : "; cin >> x;
	cout << "hasil dari f(x) = x^2 - 5x + 5 = " << hasil(x);  
	return 0;
}
