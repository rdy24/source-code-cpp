#include <iostream>
using namespace std;

int main() {
	int a[2] = {0,0};
	int kelas1[5],kelas2[5],min[2],max[2];
	double jml[2] = {0,0};
	double rata[3];
	cout << "Data Nilai Kelas 1" << endl << endl;
	for(int i = 0;i < 5;i++) {
		a[0]++;
		cout << "Nilai Mahasiswa kelas 1 Nomor " << a[0] << " = ";cin >> kelas1[i];
		if(i == 0) {
			min[0] = kelas1[i];
			max[0] = kelas1[i];
		} else if (max[0] < kelas1[i]) {
			max[0] = kelas1[i];
		} else if (min[0] > kelas1[i]) {
			min[0] = kelas1[i];
		}
		jml[0] += kelas1[i];
	}
	cout << endl;
	cout << "Data Nilai Kelas 2" << endl << endl;
	for(int j = 0;j < 5;j++) {
		a[1]++;
		cout << "Nilai Mahasiswa kelas 2 Nomor " << a[1] << " = ";cin >> kelas2[j];
		if(j == 0) {
			min[1] = kelas2[j];
			max[1] = kelas2[j];
		} else if (max[1] < kelas2[j]) {
			max[1] = kelas2[j];
		} else if (min[1] > kelas2[j]) {
			min[1] = kelas2[j];
		}
		jml[1] += kelas2[j];
	}
	cout << endl;
	cout << "Jumlah Nilai Kelas 1 = " << jml[0] << endl; rata[0] = jml[0] / 5;
	cout << "Rata Rata Kelas 1 = " << rata[0] << endl;
	cout << "Nilai terbesar Kelas 1 = " << max[0] << endl;
	cout << "nilai terkecil Kelas 1 = " << min[0] << endl << endl;
	
	cout << "Jumlah Nilai Kelas 2 = " << jml[1] << endl; rata[1] = jml[1] / 5;
	cout << "Rata Rata Kelas 2 = " << rata[1] << endl;
	cout << "Nilai terbesar Kelas 2 = " << max[1] << endl;
	cout << "nilai terkecil Kelas 2 = " << min[1] << endl << endl;
	
	cout << "Jumlah Nilai kelas 1 & 2 = " << jml[0] + jml[1] << endl;
	cout << "Rata Rata Nilai Kelas 1 & 2 = " << (rata[0] + rata[1]) / 2 << endl;
	cout << "Nilai tertinggi dari kelas 1 & 2 = " ;
	if(max[0] >= max[1]) {
		cout << max[0];
	}else if(max[1] >= max[0]) {
		cout << max[1];
	}
	cout << endl;
	cout << "Nilai terendah dari kelas 1 & 2 = ";
	if (min[0] <= min[1]) {
		cout << min[0];
	}else if(min[1] <= min[0]) {
		cout << min[1];
	}
}
