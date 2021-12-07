#include <iostream>
using namespace std;

int main() {
	int i,ganjil = 1,jml = 0;
	for(i = 0;i < 20;i++){
		i += 1;
		cout << i << "\t";
		jml += ganjil;
		ganjil = ganjil+2;
	}
	cout << endl << endl << "Jumlah Deret Bilangan Ganjil di atas = " << jml;
return 0;	
}
