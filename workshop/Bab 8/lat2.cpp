#include <iostream>
using namespace std;

string nama(string n) {
	return n;
}

string nim() {
	return "2018112";
}

main() {
	string x;
	cout << "Nama : ";cin >> x;
	cout << "Nim : " << nim();
	cout << endl << endl;
	
	cout << "Nama : " << nama(x) << endl;
	cout << "Nim : " << nim();
}
