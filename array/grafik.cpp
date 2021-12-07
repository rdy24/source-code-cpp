#include <iostream>
using namespace std;

main() {
	int a,array[a];
	cout << "Masukan banyak data : "; cin >> a;
	for(int i = 0;i < a;i++) {
		cout << "value " << i << " = "; cin >> array[i];
	}
	cout << "\nGrafik data" << endl;
	cout << "----------------------------------" << endl;
	for (int i = 0;i < a;i++) {
		cout << "nomor ke - " << i << " = ";
		for(int b = 0;b < array[i];b++) {
			cout << "*";
		}
		cout << endl;
	}
}
