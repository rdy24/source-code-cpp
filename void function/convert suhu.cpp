#include <iostream>
using namespace std;

void fahrenheit(int s) {
	int f;
	f = (1.8 * s) + 32;
	cout << "Suhu menjadi : " << f << " Fahrenheit";
}

void kelvin(int s) {
	int k;
	k = s + 273;
	cout << "Suhu menjadi : " << k << " Kelvin";
}

int main() {
	int a;
	cout << "Masukan suhu celcius : "; cin >> a;
	fahrenheit(a);
	cout << endl;
	kelvin(a);
}
