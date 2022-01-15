#include <iostream>
using namespace std;

int main() {
	int data[5]={ 25, 11, 19, 21, 5};
	int tanda;
	cout<<"Data awal : ";
	for(int x=0;x<5;x++) {
		cout<<data[x]<<" ";
	}
	cout<<endl<<endl;
	for(int b=0;b<4;b++) { // looping Proses dan pivot
		cout<<"Proses "<<b+1<<" = ";
	for(int a=b;a<4;a++) { //looping perbandingan pivot dengan kolom
		if(data[b]>data[a+1]) {
			data[b]=data[b];
		} else {
			tanda=data[b];
			data[b]=data[a+1];
			data[a+1]=tanda;
		}
	}
	for(int a=0;a<5;a++) {
		cout<<data[a]<<" ";
	}
	cout<<endl;
	}
}
