#include <iostream>
#include <math.h>
using namespace std;

void bilangan(int a){
	int j;
	int A[16]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
	int B[16]={2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31};
	int C[16]={4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31};
	int D[16]={8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31};
	int E[16]={16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	
	if(a==0){
		for(j=0;j<16;j++){
			cout<<A[j]<<'\t';
		}
	}
	else if(a==1){
			for(j=0;j<16;j++){
			cout<<B[j]<<'\t';
		}
	}
	else if(a==2){
		for(j=0;j<16;j++){
			cout<<C[j]<<'\t';
		}
	}
	else if(a==3){
		for(j=0;j<16;j++){
			cout<<D[j]<<'\t';
		}
	}
	else{
		for(j=0;j<16;j++){
			cout<<E[j]<<'\t';
		}
	}
}

main()
{
	int x,y;
	cout<<"\tS U L A P A N"<<endl;
	do
	{
		cout<<"Pilih Menu"<<endl;
		cout<<"\n1. Mulai"<<endl;
		cout<<"2. Keluar"<<endl;
		cout<<"Masukkan pilihan : ";
		cin>>y;
		switch(y)
		{
			case 1:
				int jawab=0;
				cout<<"-----------------------------------"<<endl;
				cout<<"Jika ada tekan 1"<<endl;
				cout<<"Jika tidak ada tekan 0"<<endl;
				cout<<"-----------------------------------"<<endl;
				for(int i=0;i<5;i++){
					cout<<"\nApakah ada di tabel "<<i+1<<" : "<<endl;
					bilangan(i);
					cout<<"\nJawaban :";
					cin>>x;
					if(x==1){
						jawab=jawab+pow(2,i);
					}
					else if(x==0){
						jawab=jawab;
					}
					else{
						cout<<"Pilihan tidak tersedia"<<endl;
					}
				}
				cout<<endl;
				cout<<"angka anda : "<<jawab<<endl;
		}
	}while(y!=2);
}
