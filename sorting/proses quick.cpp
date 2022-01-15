#include <iostream>

using namespace std;
	float data[5] = { 6, 20, 8, 5, 10 };
	void QuickSort(int L, int R){
		int i, j;
		int mid;
		i = L;
		j = R;
		cout<<" Quicksort ("<<L<<", "<<R<<") = "<<endl;
		cout << " L = " <<L<<endl;
		cout << " R = " <<R<<endl;
		cout << " i = " <<i<<endl;
		cout << " j = " <<j<<endl;
		mid = data[(L + R) / 2];
		cout << " Data Tengah	= "<<mid<<endl;
		do {
			while(data[i] < mid) i++;{
				cout << " Nilai i =" <<i <<endl;
			}
			while (data[j] > mid) j--; 
				cout << " Nilai j =" <<j<<endl;
				if (i <= j){
					int t;
					cout << " Apakah i<=j ?" <<endl;
					cout << " Apakah " <<i << " <= " <<j <<" ? -> iya" <<endl;
					cout << " Tukar data ke-[" <<i << "] dengan data ke-[" <<j <<"]" <<endl;
					cout << " Data sebelum ditukar 	: ";
						for(int i=0;i<5;i++){
							cout<<data[i]<<" ";
						}
					cout <<endl;
					t = data[j];
					data[j] = data[i];
					data[i] = t;
					i++;
					j--;
					cout << " Data setelah di tukar	: " ;
						for(int i=0;i<5;i++){
							cout<<data[i]<<" ";
						}
				cout << endl;
				cout << " Nilai i = " << i << endl;
				cout << " Nilai j = " << j << endl; 
				cout<<endl;
				}
		}	while (i < j);

		if (L < j) QuickSort(L, j);
		if (i < R) QuickSort(i, R);
}

main(){
	cout<<" Proses Quick Sort"<<endl;
	cout<<"------------------------------------- "<<endl;
	cout<<"Data awal : ";
	for(int i=0;i<5;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	QuickSort(0,4);
}
