#include <iostream>
using namespace std;

int main() {
	int a;
	double rata,jml = 0;
	int ma[a];
	cout << "Masukan banyak data = "; cin >> a;
	for (int i = 0;i < a;i++) {
		cout << "Masukan data ke - [" << i << "] = "; cin >> ma[i];
		jml += ma[i];
	}
	cout << endl;
	cout << "Menampilkan nilai yang telah di input" << endl << endl;
	for (int i = 0;i < a;i++) {
		cout << "Nilai mahasiswa ke - [" << i << "] = "<< ma[i] << endl;
	}
	cout << "\nTotal = " << jml << endl;
	rata = jml / a;
	cout << "Rata - Rata = " << rata;
}
