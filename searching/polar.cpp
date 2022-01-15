#include <iostream>
using namespace std;
//mencari posisi array data ketika ditemukan
int interpolationSearch(int data[], int n, int cari) {
// Mencari ujung indeks
int lo = 0, hi = (n - 1);
while (lo <= hi && cari >= data[lo] && cari <= data[hi]) {
	if (lo == hi) {
		if (data[lo] == cari) return lo;
	return -1;
}
// Mengira posisi dengan rumus
int pos = lo + (((double)(hi - lo) /
(data[hi] - data[lo])) * (cari - data[lo]));
// Jika data cari ditemukan
if (data[pos] == cari)
return pos;
// Jika cari lebih besar dari nilai indeks
if (data[pos] < cari)
lo = pos + 1;
// Jika cari lebih kecil dari nilai indeks
else
hi = pos - 1;
}
return -1;
}
int main()
{
int data[] = {4,5,6,8,10,12,20};
int cari;
cout<<"+================================+ \n";
cout<<" PROGRAM INTERPOLATION SEARCHING \n";
cout<<"+================================+ \n\n";
cout << "Data : " << endl;
for (int x = 0; x <= 6; x++)
{
cout << " " << data[x];
}
cout<<endl;
int n = sizeof(data)/sizeof(data[0]);//menentukan ukuran array(banyak data)
cout << "=================================" << endl;
cout << "Masukkan Data Yang Ingin Dicari : "; cin >> cari;
int tanda = interpolationSearch(data, n, cari);
if (tanda != -1)
{
cout << ":: Data Ditemukan ::" << endl;
cout << " Pada array ke = "<<tanda;
}
else
{
cout << ":: Data Tidak Ditemukan :: " << endl;
}
}
