#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "\t\tProgram mengecek bilangan ganjil atau genap" << endl << endl;
	cout << "Masukan bilangan : "; cin >> a;
	cout << endl;
	if(a % 2 == 0) {
		cout << a << " adalah bilangan genap";
	} else{
		cout << a << " adalah bilangan ganjil";
	}
return 0;
}
