#include <iostream>
using namespace std;

int main () {
	float a,b,n,rata,rata1,rata2,jml1 = 0,jml2 = 0;
	cout << "Masukan Jumlah data kelas A = "; cin >> a;
	for (int i = 1;i <= a;i++) {
		cout << "Masukan nilai ke- " << i << " = "; cin >> n;
		jml1 += n;
	}
	rata1 = jml1 / a;
	cout << "Rata - Rata Kelas A = " << rata1;
	cout << endl << endl;;
	cout << "Masukan Jumlah data kelas B = "; cin >> b;
	for (int i = 1;i <= b;i++) {
		cout << "Masukan nilai ke- " << i << " = "; cin >> n;
		jml2 += n;
	}
	rata2 = jml2 / b;
	cout << "Rata - Rata Kelas B = " << rata2 << endl << endl;
	rata = (rata1 + rata2) / 2;
	cout << "Rata - Rata Kelas A & B = " << rata;
return 0;
}
