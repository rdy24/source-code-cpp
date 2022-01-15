#include <iostream>
using namespace std;

main() {
	int data[7] = {4,5,6,8,10,12,20}; //data harus urut
	int cari, awal=0, akhir=6, tengah;
	int flag = 0;
	cout<<"+================================+ \n";
	cout<<" PROGRAM SEARCHING \n";
	cout<<"+================================+ \n\n";
	cout<<"Data : ";
	for(int a=0; a<=6;a++) {
		cout<<data[a]<< " ";
	}
	cout << "\nmasukan data yang dicari : "; cin >> cari;
	while (awal <= akhir && flag == 0) {
		tengah = (awal + akhir)/2;
		if (cari == data [tengah]) {
			flag = 1;
			break;
		} else if (cari < data[tengah]) {
			akhir= tengah - 1;
		} else if (cari > data[tengah]) {
			awal = tengah + 1;
		}
	}
	if ( flag == 1 ) {
		cout<<"\n================\n";
		cout<<"Data di temukan!\n";
		cout<<"================\n";
	} else {
		cout<<"\n================\n";
		cout<<"Data tidak temukan!\n";
		cout<<"================\n";
	}
}
