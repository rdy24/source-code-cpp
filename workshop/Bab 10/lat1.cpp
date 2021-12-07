#include <iostream>
using namespace std;

int main() {
	int a,data[a],max,min;
	cout << "Masukan Banyak data : ";cin >> a;
	cout << endl;
	for(int i = 0;i < a;i++) {
		cout << "Tinggi mahasiswa ke - " << i+1 << " : ";cin >> data[i];
	}
	cout << endl;
	cout << "Data Tinggi Badan Mahasiswa" << endl << endl;
	for(int i = 0;i < a;i++) {
		cout << "Tinggi mahasiswa ke - " << i+1 << " : " << data[i] << endl;
		if(i == 0) {
			min = data[i];
			max = data[i];
		} else if(min > data[i]) {
			min = data[i];
		} else if(max < data[i]) {
			max = data[i];
		}
	}

	cout << "Tertinggi : " << max << endl;
	cout << "Terendah : " << min << endl;
	return 0;

}

