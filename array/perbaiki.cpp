#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Masukan ukuran ordo matrik pertama dan kedua = "; cin >> n;
	int matrik_1[n][n], matrik_2[n][n];
	cout << endl;
	cout << "Masukan nilai matrik pertama = " << endl;
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < n;j++) {
			cout << "baris " << i << " kolom " << j << " : "; cin >> matrik_1[i][j];
		}
	}
	cout << endl;
	cout << "Masukan nilai matrik kedua = " << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0;j < n;j++) {
			cout << "baris " << i << " kolom " << j << " : "; cin >> matrik_2[i][j];
		}
	}
	cout << endl;
	cout << "Hasil penjumlahan matrik pertama dan kedua = " << endl;
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < n;j++) {
			cout << matrik_1[i][j] + matrik_2[i][j] << " ";
		}
		cout << endl;
	}
}
