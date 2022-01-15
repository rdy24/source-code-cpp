#include <iostream>
#define MAX 10
using namespace std;

typedef struct {
	string nama_pasien,urutan;
} pasien;

typedef struct {
	int head;
	int tail;
	pasien data[MAX];
} Queue;
Queue antri;

typedef struct{
	string nama, no;
} struk;
struk variabel;

void input() {
	if(antri.tail == MAX - 1) {
		cout << "Antrian Penuh";
	} else {
		cout << "Masukan nomor antrian : "; cin >> variabel.no;
		fflush(stdin);
		cout << "Masukan nama : "; getline(cin,variabel.nama);
		antri.tail++;
		antri.data[antri.tail].urutan = variabel.no;
		antri.data[antri.tail].nama_pasien = variabel.nama;
	}
}

void hapus(){
	if(antri.tail < antri.head) {
		cout << "Antrian Kosong";
	} else {
		cout<< "Data Pasien yang keluar = " << antri.data[antri.head].urutan << " atas nama " << antri.data[antri.head].nama_pasien << endl;
		antri.head++;
		cout << "Head = " << antri.head << " Tail = " << antri.tail;
	} 
}

void cetak(){
	if(antri.tail == -1){
		cout << "Antrian Kosong";
	} else {
		cout << endl;
		cout << "Data dalam antrian adalah : "<< endl << endl;
		for(int i = antri.head;i <= antri.tail;i++){
			cout << antri.data[i].urutan << " atas nama " << antri.data[i].nama_pasien << endl;
		}
	} 
}

int main(){
	int pil;
	antri.head = 0;
	antri.tail = -1;
	do {
		cout << endl;
		cout << "=====================================" << endl;
		cout << "|    Antrian Pasien Rumah Sakit     |" << endl;
		cout << "=====================================" << endl;
		cout << "|   1. Masukkan Data Pasien         |" << endl;
		cout << "|   2. Keluarkan Data Pasien        |" << endl;
		cout << "|   3. Cetak Data Pasien            |" << endl;
		cout << "*************************************" << endl;
		cout << "Silahkan Masukan Pilihan Anda : "; cin >> pil;
		cout << endl;
		switch (pil) {
			case 1:
				input();
			break;
			case 2:
				hapus();
			break;
			case 3:
				cetak();
			break;
			default :
				cout << "------------------------------------------" << endl;
				cout << "Maaf, Pilihan Anda Tidak Ditemukan" << endl;
				cout << "------------------------------------------" <<endl;
		}
	} while(pil >= 1 && pil <= 3);
}
