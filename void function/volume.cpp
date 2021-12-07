#include <iostream>
using namespace std;

void volume(int r,int t) {
	double p = 3.14,v;
	v =  (p * r * r * t) / 3;
	cout << "Volume kerucut = " << v;
}

int main () {
	int a,b;
	cout << "Masukan jari jari : "; cin >> a;
	cout << "Masukan tinggi kerucut : "; cin >> b;
	volume(a,b);
}
