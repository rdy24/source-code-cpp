#include <iostream>
using namespace std;

int main () {
	int data[7]={8,6,10,5,12,4,20};
	int cari;
	int flag = 0;
	cout << "+=======================+\n";
	cout << " Program Searching \n";
	cout << "+=======================+\n";
	cout << "Data awal : ";
	for(int a = 0;a < 7;a++) {
		cout<<data[a]<<" ";
	}
	cout << endl;
	cout << endl;
	cout << "Masukkan data yang ingin di cari : "; cin >> cari;
	cout << endl;
	for(int x = 0;x < 7;x++) {
		if(data[x] == cari) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		cout << "================\n";
		cout << "Data di temukan!\n";
		cout << "================\n";
	} else {
		cout << "\n ================\n";
		cout << " Data tidak temukan!\n";
		cout << "\n ================\n";
	}
}
