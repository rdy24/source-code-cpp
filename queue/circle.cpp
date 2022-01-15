#include <iostream>
using namespace std;

typedef struct{
	int data[5];
	int head;
	int tail;
} Queue;
Queue antri;

typedef struct{
	int baru;
} struk;
struk variabel;

void input(){
	if(antri.tail == 5 - 1){
		cout<<"Antrian Penuh";
	} else{
		cout<<"Data yang akan di Push ="; cin >> variabel.baru;
		antri.tail++;
		antri.data[antri.tail] = variabel.baru;
		cout << "Head = " << antri.head <<" Tail = " << antri.tail;
	} 
}

void out(){
	if(antri.tail < antri.head){
		cout<<"Antrian Kosong";
	} else {
		cout<< "Data yang akan di keluar = " << antri.data[antri.head] << endl;
		antri.head = antri.head + 1;
		cout<<"Head = "<<antri.head<<" Tail = "<<antri.tail;
	} 
}

void cetak(){
	if(antri.tail == -1){
		cout<<"Antrian Kosong";
	} else{
		cout<<endl;
		cout<< "Data dalam antrian adalah : "<< endl << endl;
		for(int i = antri.head;i <= antri.tail;i++){
			cout<<antri.data[i]<<" ";
		}
	} 
}

int main(){
	int pil, baru, i;
	antri.head = 0;
	antri.tail = -1;
	cout<<"====================================="<<endl;
	cout<<"= Q u e u e ( A N T R I A N ) ="<<endl;
	cout<<"====================================="<<endl;
		do {
			cout <<endl;
			cout << "*************************************" << endl;
			cout << "1. Masukkan Data" << endl;
			cout << "2. Keluarkan Data" << endl;
			cout << "3. Cetak Data" << endl;
			cout << "Silahkan Masukan Pilihan Anda : "; cin >> pil;
			cout << endl;
		switch (pil){
			case 1:
				input();
			break;
			case 2:
				out();
			break;
			case 3:
				cetak();
			break;
			default :
				cout << "------------------------------------------" << endl;
				cout << "Maaf, Tidak ada dalam pilihan" << endl;
				cout <<"-----------------------------------------"<<endl;
		}
	} while(pil >= 1 && pil <= 3);
}
