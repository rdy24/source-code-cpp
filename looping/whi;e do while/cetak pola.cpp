#include <iostream>
using namespace std;

int main() {
	int a,b = 2,c = 2;
	char f,g = 'I';
	cout << "Latihan 1.a :" << endl;
	a = 5;
	while (a > 0) {
		cout << a << " ";
		a--;
	}
	cout << endl << endl;
	cout << "Latihan 1.b :" << endl;
	a = 1;
	while (a <= 5) {
		cout << b << endl;
		b *= 2;
		a++;
	}
	cout << endl;
	cout << "Latihan 1.c :" << endl;
	a = 1;
	while (a <= 5) {
		cout << c << " ";
		c += a;
		a++;
	}
	cout << endl << endl;
	cout << "Latihan 1.d :" << endl;
	f = 'A';
	while (f <= 'E') {
		cout << f << " ";
		f++;
	}
	cout << endl << endl;
	cout << "Latihan 1.e :" << endl;
	a = 5;
	while (a >= 1) {
		cout << g << endl;
		g -= 2;
		a--;
	}	
return 0;
}
