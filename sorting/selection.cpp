#include <iostream>
using namespace std;

main() {
	int x,data[x],temp;
	int i = 0,pos = 0,j = 1;
	cout << "Masukan jumlah data : "; cin >> x;
	cout << endl;
	for(int a = 0;a < x;a++) {
		cout << "Data ke - " << a + 1 << " : "; cin >> data[a];
	}
	cout << endl;
	cout << "===================================" << endl;
	cout << "Data Awal : ";
	for(int a = 0;a < x;a++) {
		cout << data[a] << " ";
	}
	cout << endl;
	cout << "===================================" << endl;
	for(int b = 0;b <= x - 2;b++){
		i = b;
		pos = b;
		j = b + 1;
		while (j < x){
			if(data[j] < data[pos]){
			pos = j;
			j = j + 1;
			} else{
				pos = pos;
				j = j + 1;
			}
		}
		if(pos != i){
		temp = data[pos];
		data[pos] = data[i];
		data[i] = temp;
		}
	cout<<"Proses "<< b + 1 << " = ";
		for(int a = 0;a < x;a++){
			cout << data[a] <<" ";
		}
	cout << endl;
	}
}
