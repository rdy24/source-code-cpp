#include <iostream>
using namespace std;

struct node {
	int usia;
	string nama,kamar,asal,keluhan;
	node *next;
};
node *head, *tail;

int cek() {
	if(tail == NULL) {
		return 0;
	} else {
		return 1;
	}
}

void tambahdepan(string kamarbaru,string namabaru,int usiabaru,string asalbaru,string keluhanbaru) {
	node *baru;
	baru = new node;
	baru -> kamar = kamarbaru;
	baru -> nama = namabaru;
	baru -> usia = usiabaru;
	baru -> asal = asalbaru;
	baru -> keluhan = keluhanbaru;
	baru -> next = NULL;
	if(cek() == 0) {
		head = tail = baru;
		tail -> next = NULL;
	} else {
		baru -> next = head;
		head = baru;
	}
	cout << "\nData Pasien Berhasil Dimasukan" << endl << endl;
}

void tambahbelakang(string kamarbaru,string namabaru,int usiabaru,string asalbaru,string keluhanbaru) {
	node *baru;
	baru = new node;
	baru -> kamar = kamarbaru;
	baru -> nama = namabaru;
	baru -> usia = usiabaru;
	baru -> asal = asalbaru;
	baru -> keluhan = keluhanbaru;
	baru -> next = NULL;
	if(cek() == 0) {
		head = baru;
		tail = baru;
		tail -> next = NULL;
	} else {
		tail -> next = baru;
		tail = baru;
	}
	cout << "\nData Pasien Berhasil Dimasukan" << endl << endl;
}

void tampil() {
	node *temp;
	temp = head;
	if(cek() == 1) {
		while(temp != NULL) {
		cout << "------------------------------------------" << endl;
		cout << "Kamar : " << temp -> kamar << endl;
		cout << "Nama Pasien : " << temp -> nama << endl;
		cout << "Usia Pasien : " << temp -> usia << " tahun" << endl;
		cout << "Asal Pasien : " << temp -> asal << endl;
		cout << "Keluhan Pasien : " << temp -> keluhan << endl;
		cout << "------------------------------------------" << endl;
		temp = temp -> next;
	}
	cout << endl;
	} else {
		cout << "Masih kosong" << endl;
	}
}

void hapusDepan() {
	node *hapus;
	if (cek() != 0) {
		if(head != tail) {
			hapus = head;
			head = head -> next;
			delete hapus;
		} else {
			head = tail = NULL;
		}
	cout << "Data terhapus \n" << endl;
	} else {
		cout << "Masih kosong\n" << endl;
	} 
}

void hapusBelakang() {
	node *temp,*hapus;
	if (cek() != 0) {
		temp = head;
		if(head != tail) {
			while(temp -> next != tail) {
				temp = temp -> next;
			}
		hapus = tail;
		tail = temp;
		delete hapus;
		tail -> next = NULL;
		} else {
			head = tail = NULL;
		}
	cout << "Data terhapus\n\n";
	} else {
		cout<<"Masih kosong\n\n";
	}
}

main() {
	int pil,usia;
	string nama,prodi,kamar,asal,keluhan;
	do
	{
		cout << "=======================================" << endl;
		cout << "Single Linked List dengan Head dan Tail" << endl;
		cout << "=======================================" << endl;
		cout << "1. Masukkan Data Pasien dari Depan" << endl;
		cout << "2. Masukkan Data Pasien dari Belakang" << endl;
		cout << "3. Hapus Data Depan" << endl;
		cout << "4. Hapus Data Belakang" << endl;
		cout << "5. Tampilkan Data Pasien" << endl;
		cout << "6. Keluar" << endl;
		cout << "=======================================" << endl;
		cout << "Masukkan Pilihan Anda = "; cin >> pil;
		cout << endl;
		switch(pil) {
			case 1:
				cout << "Kamar = "; cin >> kamar;
				fflush(stdin);
				cout << "Masukkan Nama Pasien = "; getline(cin,nama);
				cout << "Masukkan Usia Pasien = "; cin >> usia;
				fflush(stdin);
				cout << "Masukkan Asal Pasien = "; getline(cin,asal);
				cout << "Masukkan Keluhan = "; getline(cin,keluhan);
				tambahdepan(kamar,nama,usia,asal,keluhan);
			break;
			case 2:
				cout << "Kamar = "; cin >> kamar;
				fflush(stdin);
				cout << "Masukkan Nama Pasien = "; getline(cin,nama);
				cout << "Masukkan Usia Pasien = "; cin >> usia;
				fflush(stdin);
				cout << "Masukkan Asal Pasien = "; getline(cin,asal);
				cout << "Masukkan Keluhan = "; getline(cin,keluhan);
				tambahbelakang(kamar,nama,usia,asal,keluhan);
			break;
			case 3:
				hapusDepan();
			break;
			case 4:
				hapusBelakang();
			break;
			case 5:
				tampil();
			break;
			case 6:
				cout << "Keluar dari program";
			break;
			default:
				cout << "Pilihan tidak tersedia";
			break;
		}
	} while(pil != 6);
}
