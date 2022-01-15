#include <iostream>
using namespace std;

int interpolation(int data[], int n, int cari) {
	int lo = 0, hi = (n - 1);
	while (lo <= hi && cari >= data[lo] && cari <= data[hi]) {
		if (lo == hi) {
			if (data[lo] == cari) {
				return lo;	
			} 
		return -1;
		}
		int pos = lo + (((double)(hi - lo) / (data[hi] - data[lo])) * (cari - data[lo]));
		if (data[pos] == cari) {
			return pos;
		} else if (data[pos] < cari) {
			lo = pos + 1;
		} else {
			hi = pos - 1;
		}
	}
return -1;
}

int exchange(int data[],int x,int temp) {
	for(int b = 0;b < x - 1;b++) { 
		for(int a = b;a < x - 1;a++) {
			if(data[b] < data[a + 1]) {
				data[b];
			} else {
				temp = data[b];
				data[b]=data[a+1];
				data[a+1]=temp;
			}
		}
	}
}

main() {
	int cari,temp;
	int x,data[x];
	cout << "==================================" << endl;
	cout << "       Interpolation Search       " << endl;
	cout << "==================================" << endl;
	cout << "Banyak data : "; cin >> x;
	cout << endl;
	for(int i = 0;i < x;i++) {
		cout << "Data Ke " << i + 1 << " : "; cin >> data[i];
	}
	cout << endl;
	cout << "Data : ";
	for(int i = 0; i < x; i++) {
		cout << data[i] << " ";
	}
	cout << endl;	
	
	exchange(data,x,temp);
	
	cout << endl;
	cout << "Data Setelah diurut : ";
	for(int i = 0; i < x; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	int n = x;
	cout << "Data Yang Ingin Dicari : "; cin >> cari;
	cout << endl;
	int tanda = interpolation(data, n, cari);
	if (tanda != -1) {
		cout << cari <<" Ditemukan di indeks ke " << tanda;
	} else {
		cout << "Data Tidak Ditemukan!" << endl;
	}
}
