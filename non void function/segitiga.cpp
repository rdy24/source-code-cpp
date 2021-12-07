#include <iostream>
using namespace std;

double luas(double a,double b){
	double c;
	c = (a * b) / 2;
	return c;
}

int kell() {
	int s1,s2,s3,k;
	cout << "Masukan panjang sisi 1 : "; cin >> s1;
	cout << "Masukan panjang sisi 2 : "; cin >> s2;
	cout << "Masukan panjang sisi 3 : "; cin >> s3;
	k = s1 + s2 + s3;
	cout << "Keliling segitiga : " << k;
	return k;
}

int main(){
	int a,t,p;
	cout << "\tMenghitung Luas atau keliling segitiga" << endl << endl;
	cout << "1. Luas" << endl;
	cout << "2. Keliling" << endl;
	cout << "Masukan pilihan : "; cin >> p;
	cout << endl;
	switch (p) {
		case 1:
			cout << "Masukan alas : "; cin >> a;
			cout << "Masukan tinggi : "; cin >> t;
			cout << "Luas segitiga : " << luas(a,t);
		break;
		case 2:
			kell();
		break;
	}
return 0;	
}

