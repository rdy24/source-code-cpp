#include <iostream>
using namespace std;

main() {
	int *pBil;
	int bilX = 77;
	pBil = &bilX;
	
	cout << "Isi bilX = " << bilX << endl;
	cout << "Nilai yang ditunjuk pBil = " << *pBil << endl;
	
	*pBil = *pBil + 3;
	
	cout << "Isi bilX sekarang = " << bilX << endl;
	cout << "Nilai yang ditunjuk pBil = " << *pBil << endl;
	
	return 0;
}
