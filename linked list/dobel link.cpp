#include <iostream>
using namespace std;

struct node {
	string nama;
	node *next;
	node *prev;
};
node *head, *tail;

int cek() {
	if(head == NULL) {
		return 0;
	} else {
		return 1;
	}
}

void tambahdepan (string namabaru) {
	node *baru;
	baru = new node;
	baru -> nama = namabaru;
	baru -> next = NULL;
	baru -> prev = NULL;
	if(cek() == 0) {
		head = baru;
		tail = head;
		head -> next = NULL;
		head -> prev = NULL;
		tail -> prev = NULL;
		tail -> next = NULL;
	} else {
		baru -> next = head;
		head -> prev = baru;
		head = baru;
	}
cout << endl;
cout << "----------------------" << endl;
cout << "Data telah ditambahkan" << endl;
cout << "----------------------" << endl << endl;
}

void tambahbelakang(string namabaru) {
	node *baru;
	baru = new node;
	baru -> nama = namabaru;
	baru -> next = NULL;
	baru -> prev = NULL;
	if(cek() == 0) {
		head = baru;
		tail = head;
		head -> next = NULL;
		head -> prev = NULL;
		tail -> prev = NULL;
		tail -> next = NULL;
	} else {
		tail -> next = baru;
		baru -> prev = tail;
		tail = baru;
		tail -> next = NULL;
	}
cout << endl;
cout << "----------------------" << endl;
cout << "Data telah ditambahkan" << endl;
cout << "----------------------" << endl << endl;
}

void tampil() {
	node *temp; 
	temp = head;
	int n = 1;
	if(cek() == 1) {
		while(temp != tail -> next) {
			cout << "=========================================" << endl;
			cout << "\tNode " << n << " || Alamat : " << temp << endl;
			cout << "-----------------------------------------" << endl;
			cout << "Prev : " << temp -> prev << " | Data : " << temp -> nama << " | Next : " << temp -> next << endl;
			cout << "========================================="<< endl;
			temp = temp -> next;
			n++;
		}
	cout << endl << endl;
	} else {
		cout << "\nData Masih Kosong \n\n";	
	}
}

void hapusdepan() {
	node *hapus;
	string cap;
	if (cek() == 1) {
		if(head -> next != NULL) {
			hapus = head;
			cap = hapus -> nama;
			head = head -> next;
			head -> prev = NULL;
			delete hapus;
		} else {
			cap = head -> nama;
			head = NULL;
			tail = NULL;
		}
	cout << endl;
	cout << "---------------------------------" << endl;
	cout << "Data " << cap << " telah terhapus" << endl;
	cout << "---------------------------------" << endl <<endl;
	} else {
		cout << "\nData Masih Kosong \n\n";
	} 
}

void hapusbelakang() {
	node *hapus;
	string cap;
	if (cek() == 1) {
		if(head -> next != NULL) {
			hapus = tail;
			cap = tail -> nama;
			tail = tail -> prev;
			tail -> next = NULL;
			delete hapus;
		} else {
			cap = head -> nama;
			head = NULL;
			tail = NULL;
		}
	cout << endl;
	cout << "---------------------------------" << endl;
	cout << "Data " << cap << " telah terhapus" << endl;
	cout << "---------------------------------" << endl <<endl;
	} else {
		cout << "\nData Masih Kosong \n\n";	
	} 
}

main() {
	int pil;
	string nama;
	do {
	cout << "======================================" << endl;
	cout << "          Double Linked List          " << endl;
	cout << "======================================" << endl;
	cout << "1. Masukkan Data dari Depan" << endl;
	cout << "2. Masukkan Data dari Belakang" << endl;
	cout << "3. Hapus Data dari Depan" << endl;
	cout << "4. Hapus Data dari Belakang" << endl;
	cout << "5. Tampilkan Data" << endl;
	cout << "6. Keluar" << endl;
	cout << "======================================" << endl;
	cout << "Masukkan Pilihan Anda = "; cin >> pil;
	switch(pil) {
		case 1:
			cout << "Masukkan Data = "; cin >> nama;
			tambahdepan(nama);
		break;
		case 2:
			cout<<"Masukkan Data = "; cin >> nama;
			tambahbelakang(nama);
		break;
		case 3:
			hapusdepan();
		break;
		case 4:
			hapusbelakang();
		break;
		case 5:
			tampil();
		break;
		case 6:
			cout << "keluar dari program";
		break;
		default:
			cout << "pilihan tidak tersedia... \n\n";
		break;
		}
} while(pil!=6);}
