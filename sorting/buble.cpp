#include<iostream>
using namespace std;

int main() {
	int list[4]={7,5,9,3};
	int temp;
	cout<<"Data Random ";
	for(int d=0;d < 4;d++) {
		cout<<" "<<list[d];
	}
	cout<<"\n\n";
	for(int i=0;i<3;i++) {
		cout<<"Proses ke "<<i+1<<" = ";
	for(int x=0;x<3;x++) {
		if(list[x]>=list[x+1]) {
			temp=list[x];
			list[x]=list[x+1];
			list[x+1]=temp;
		}
	}
	for(int y=0;y<4;y++) {
		cout<<" "<<list[y];
	}
	cout<<endl;
	}
	cout<<endl;
	cout<<"Data setelah di urutkan : ";
	for (int d=0;d<4;d++) {
		cout<<" "<<list[d];
	}
}
