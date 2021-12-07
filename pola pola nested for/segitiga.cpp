#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	for (a = 1; a <= 4; a++) {
		for (b = 4; b > a; b--) {
			cout << "  ";
			}
		for (int c = 1; c <= a; c++){
			cout << "* ";
			}
		cout << endl << endl;
		}
return 0;
}
