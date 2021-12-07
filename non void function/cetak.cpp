#include <iostream>
using namespace std;

string cetak(string x) {
	return x;
}

string cetak1() {
	return ("Lab. Rekayasa Perangkat Lunak");
}

int main() {
	string a = "Lab. Rekayasa Perangkat Lunak";
	cout << cetak(a) << endl;
	cout << cetak1();
return 0;
}
