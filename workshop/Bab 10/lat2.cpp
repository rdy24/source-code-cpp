#include <iostream>
using namespace std;

main() {
	int a,poin[a];
	cout << "Masukan Banyak data : ";cin >> a;
	cout << endl;
	string nama[a];
	for(int i = 0;i < a;i++) {
		cout << "Data ke - " << i+1 << endl;
		cout << "Masukan Nama : ";cin >> nama[i];
		cout << "Masukan poin : ";cin >> poin[i];
		cout << endl;
	}
	cout << "\nGrafik data" << endl;
	cout << "----------------------------------" << endl;
	for (int i = 0;i < a;i++) {
		cout << "Data ke - " << i+1 << " " << nama[i] << " : ";
		for(int b = 0;b < poin[i];b++) {
			cout << "*";
		}
		cout << endl;
	}
}
