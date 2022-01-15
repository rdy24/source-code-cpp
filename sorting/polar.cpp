#include <iostream> 
using namespace std; 

int interpolationSearch(int data[], int n, int cari) {
	int lo = 0, hi = (n - 1);
	while (lo <= hi && cari >= data[lo] && cari <= data[hi])
	{
		if (lo == hi) {
			if (data[lo] == cari) return lo;
			return -1;
		}

		int pos = lo + (((double)(hi - lo) / (data[hi] - data[lo])) * (cari - data[lo]));
		if (data[pos] == cari)
		return pos;
	
		if (data[pos] < cari)
		lo = pos + 1;
	
		else
		hi = pos - 1;
	}
	return -1;
}

int buble(int data[], int a, int temp) {
	for (int b=0; b<a-1; b++){
		for (int j=0; j<a-1; j++)
		 {
			if (data[j]>=data[j+1]) {
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}

int main() 
{ 
	int temp;
	int a ;
	int data[a]; 
	int cari; 
	
	cout << " Masukkan jumlah data : ";
	cin >> a;
	cout << endl;
	
	for (int x=0; x<a; x++) {
		cout << " Masukkan data ke-[" << x+1 << "] : ";
		cin >>data[x];
	}
	cout <<endl;
	
	buble(data,a,temp);
	
	cout << " Data setelah diurutkan" <<endl;
	for (int x=0; x<a; x++) {
		cout << " " << data[x] << " ";
	}
 	cout << endl << endl;
 	
 	int n =a;
	cout << "=================================" << endl; 
	cout << "Masukkan Data Yang Ingin Dicari : "; cin >> cari; 
 
 	int tanda = interpolationSearch(data, n, cari);
 	if (tanda != -1) { 
		cout << ":: Data Ditemukan ::" << endl; 
		cout << " Pada array ke = "<<tanda;
 	} 
 	else { 
		cout << ":: Data Tidak Ditemukan :: " << endl; 
 	} 
}
