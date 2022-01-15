#include <iostream>
using namespace std;

int main() {
	int data[5]={20,34,12,5,60};
	cout<<"Data awal : ";
	for(int i=0;i<5;i++) {
		cout<<data[i]<<" ";
	}
	cout<<endl;
	int temp,x,j;
	for(x=1;x<5;x++) {
		temp = data[x];
	for(j=x-1;j>=0;j--) {
		if(temp<= data[j]) {
			data[j+1]=data[j];
			data[j]=temp;
			temp=data[j];
		}
	}
	cout<<"Proses "<<x<<" = ";
	for(int y=0;y<5;y++) {
		cout<<data[y]<<" ";
	}
	cout<<endl;
	}
}
