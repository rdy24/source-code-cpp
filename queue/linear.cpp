#include <iostream>
#define max 8
using namespace std;

typedef struct{
	int data[max];
	int head;
	int tail;
} Queue;
Queue antrian;

void init(){
	antrian.head = -1;
	antrian.tail = -1;
}

int kosong(){
	if(antrian.tail==-1){
		return 1; //data kosong
	} else {
	return 0; //data berisi
	}
}

int penuh(){
	if(antrian.tail==max-1){
		return 1; //data penuh
	} else{
		return 0; //data berisi
	}
}

void masuk(){
	int data;
	cout <<"Masukkan bilangan = "; cin >>data;
		if(penuh()==0){
			antrian.tail++;
			antrian.data[antrian.tail] = data;
			cout <<"\n"<<antrian.data[antrian.tail] << " masuk ";
		} else{
			cout <<"Data penuh";
		}
}

int keluar(){
	int i;
	if(kosong()==1){
		cout<<"Kosong cuy";
	} else{
		int x=antrian.data[antrian.head+1];
		for(i=antrian.head;i<antrian.tail;i++){
			antrian.data[i]=antrian.data[i+1];
		}
		antrian.tail--;
		cout <<x <<" berhasil dikeluarkan ";
		return x;
	}
}

void clear(){
	init();
	cout <<"Data telah dikosongkan";
}

void tampil(){
	if(kosong()==0){
		for(int i=antrian.head+1;i<=antrian.tail;i++){
			cout <<antrian.data[i]<<" ";
		}
	} else { 
		cout <<"Data masih kosong";
	}
}

int main(){
	int pil;
	init();
	cout<<"*-------------------------------*"<<endl;
	cout<<"* Q u e u e ( A N T R I A N ) *"<<endl;
	cout<<"*-------------------------------*"<<endl;
	do {
		cout<<"\n";
		cout<<"\n********************************";
		cout<<"\n1. Masukkan Data";
		cout<<"\n2. Keluarkan Data";
		cout<<"\n3. Kosongkan Data";
		cout<<"\n4. Cetak Data";
		cout<<"\n\nSilahkan Masukan Pilihan Anda : "; cin >> pil;
		cout<<"\n";
		switch (pil){
		case 1:
			masuk();
		break;
		case 2:
			keluar();
		break;
		case 3:
			clear();
		break;
		case 4:
			tampil();
		break;	
		default :
			cout<<"\n Maaf, Tidak ada dalam pilihan";
		}
	}
	while(pil>=1 && pil<= 4);
		return 0;
}
