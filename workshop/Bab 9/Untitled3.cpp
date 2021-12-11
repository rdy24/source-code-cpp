#include <iostream>
#include <math.h>

using namespace std;

void volume(int r) {
	double v;
	v =  1.333333 * 3.14 * pow(r,3);
	cout << "Volume bola = " << v;
}

main () {
	int r;
	cout << "Masukan jari jari : "; cin >> r;
	volume(r);
}
