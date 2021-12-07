#include <iostream>
using namespace std;
int main() {
	char a;
	int b,c;
	for (a = 'A',b = 0,c = 1;a <= 'E',b <= 10,c <=10;a++,b++,c++){
		b+=1;
		c+=1;
		cout << "Nilai A = " << a << endl;
		cout << "Nilai B = " << b << endl;
		cout << "Nilai C = " << c << endl;
		cout << endl;
	}
return 0;	
}
