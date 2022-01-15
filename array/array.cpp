#include <iostream>
using namespace std;

int main() {
	int data[5];
	
	for(int i = 0; i<=10; i++){
		///int *a = data[i];
		cout<<"Data ke "<<i<<" "<<&data[i]<<" : "; cin>> data[i];
	}
	
	cout<<"\n--------------------------------\n";
	for(int i = 0; i<=10; i++){
		//int *a = data[i];
		cout<<"Data ke "<<i<<" : "<<data[i]<<"  "<<&data[i]<<endl;
	}
}
