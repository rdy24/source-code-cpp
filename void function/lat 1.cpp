#include <iostream>
using namespace std;

void nama (string a) {
	cout << "Halooo " << a;
}

int main () {
	string c;
	cout << "Masukan nama : "; getline (cin,c);
	nama(c);
}
