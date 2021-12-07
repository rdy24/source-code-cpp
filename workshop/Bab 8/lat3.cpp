#include <iostream>
#include <math.h> 
using namespace std;

int hasil(int x){
	int a;
	a = pow(x,4) - (20 * x) + 19;
	return a;
}

int main() {
	int x;
	cout << "Masukan nilai x : "; cin >> x;
	cout << "hasil dari f(x) = x^4 - 20x + 19 = " << hasil(x);  
	return 0;
}
