#include <iostream>
using namespace std;

void garis(string teks,int data) {
	for(int a = 1; a <= data;a++) {
		cout << teks << endl;
	}
	
}

int main() {
	string a;
	int b;
	cout << "Masukan teks = "; getline(cin,a);
	cout << "Banyak perulangan = "; cin >> b;
	garis(a,b);
	return 0;
}
