#include <iostream>
#include <string.h>
using namespace std;
#define max 100

struct stack {
	char data[max];  // struct data
	int top;
} tumpuk;

void init() {
	tumpuk.top = -1;  // inisialisasi nilai top
}

bool isEmpty() {
	return tumpuk.top == -1;   // memeriksa tumpukan
}

bool isFull() {
	return tumpuk.top == max - 1;  // memeriksa tumpukan
}

void push(char a) {					// menambah data ke tumpukan
	if(isFull()) {
		cout << "Data Penuh";
	} else {							
		tumpuk.top++;
		tumpuk.data[tumpuk.top] = a;
	}
}

char pop() {
	char ambil;					// mengambil data ke tumpukan
	if(isEmpty()) {
		cout << "Data Kosong";
	} else {		
		ambil = tumpuk.data[tumpuk.top];					
		tumpuk.top--;
	}
	return ambil;
}

main() {
	char kalimat[max];
	tumpuk.top = 0;
	
	cout << "Masukan Kalimat : "; cin.getline(kalimat,100);
	cout << endl;
	cout << "Kalimat Awal : " << kalimat << endl;
	
	for(int i = 0; i < strlen(kalimat);i++) {
		push(kalimat[i]);
	}
	cout << "Dibalik Menjadi : ";
	for(int i = 0; i < strlen(kalimat);i++) {
		cout << "" << pop();
	}
	return 0;
}
