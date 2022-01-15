#include <iostream>
using namespace std;

main() {
	int tanda,cari;
	int x,kiri,kanan,tengah,letak,flag = 0;
	int data[x];
	cout << "===================================" << endl;
	cout << "           Binary Search           " << endl;
	cout << "===================================" << endl << endl;
	cout << "Masukan banyak data : "; cin >> x;
	kiri = 0;
	kanan = x - 1;
	cout << endl;
	for(int i = 0;i < x;i++) {
		cout << "Data ke " << i + 1 << " : "; cin >> data[i];
	}
	cout << endl; 
	cout << "Data : ";
	for(int i = 0;i < x;i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	for(int b = 0;b < x - 1;b++) { 
		for(int a = b;a < x - 1;a++) {
			if(data[b] < data[a + 1]) {
				data[b];
			} else {
				tanda = data[b];
				data[b]=data[a+1];
				data[a+1]=tanda;
			}
		}
	}
	cout << endl; 
	cout << "Data Setelah diurutkan : ";
	for(int i = 0;i < x;i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	cout << "Masukan data yang dicari : ";cin >> cari;
	cout << endl;
	while (kiri <= kanan && flag == 0) {
		tengah = (kiri + kanan) / 2;
		if (cari == data[tengah]) {
			flag = 1;
			letak = tengah;
			break;
		} else if (cari < data[tengah]) {
			kanan = tengah - 1;
		} else if (cari > data[tengah]) {
			kiri = tengah + 1;
		}
	}
	if(flag == 1) {
		cout << cari << " Ditemukan pada indeks ke " << letak;
	} else {
		cout << "Data tidak temukan!";
	}
}
