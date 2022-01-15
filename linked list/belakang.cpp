#include <iostream>
using namespace std;
struct Node
{
int data;
Node *next;
};
Node *head;
int cek()
{
if(head==NULL)
{
return 0;
}
else
{
return 1;
}
}
void tambahbelakang(int databaru)
{
Node *baru;
Node *temp;
baru=new Node;
baru->data=databaru;
baru->next=NULL;
if(cek()==0)
{
head=baru;
head->next=NULL;
}
else
{
temp=head;
while (temp->next!=NULL)
{
temp=temp->next;
}
temp->next=baru;
}
cout<<"Penambahan Data Berhasil \n"<<endl;
}
main()
{
int pilihan, data;
do
{
cout<<"Single Linked List dengan Head "<<endl;
cout<<"1. Masukkan Data dari Belakang"<<endl;
cout<<"2. Keluar"<<endl;
cout<<"Masukkan Pilihan Anda : ";
cin>>pilihan;
if (pilihan == 1)
{
cout<<"Masukkan Data = ";
cin>>data;
tambahbelakang(data);
}
else if (pilihan == 2 )
{
cout<<"keluar dari program";
}
else
{
cout<<"Pilihan tidak tersedia... \n\n";
}
}
while(pilihan!=2);
}
