#include <iostream>
using namespace std;

main () {
	int x,cari,flag,letak;
	int data[x];
	cout << "=========================" << endl;
	cout << "    Sequential Search    " << endl;
	cout << "=========================" << endl << endl;
	cout << "Masukan Banyak data : "; cin >> x;
	for(int i = 0;i < x;i++) {
		cout << "Data index " << i << " : "; cin >> data[i];
	}
	cout << endl;
	cout << "Data yang ingin di cari : "; cin >> cari;
	cout << endl;
	for(int i = 0;i < x;i++) {
		if(cari == data[i]) {
			flag = 1;
			letak = i;
			break;
		}
	}
	if (flag == 1) {
		cout << cari << " Ada pada indeks ke " << letak;
	} else {
		cout << "Data tidak temukan!";
	}
}
