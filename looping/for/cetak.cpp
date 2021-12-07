#include <iostream>
using namespace std;

int main () {
	int a,n = 1;
	char b,c;
	for(a = 5; a < 10; a++) {
		cout << a << "\t";
	}
	cout << endl;
	for(a = 5; a > 0; a--) {
		cout << a << "\t";
	}
	cout << endl;
	for(int i = 1;i <= 5;i++){
		cout << n << "\t";
		n = n + i;	
	}
	cout << endl;
	for(b = 'A';b < 'J';b++) {
		cout << b << "\t";
		b = b + 1;
	}
return 0;	
}
