#include <iostream>
using namespace std;
struct Node
{
int data;
Node *next;
};
Node *head, *tail;
int cek()
{
if(tail==NULL)
{
return 0;
}
else
{
return 1;
}
}
void tambahdepan(int databaru)
{
Node *baru;
baru = new Node;
baru->data = databaru;
baru->next = NULL;
if(cek()==0)
{
head=tail=baru;
tail->next=NULL;
}
else
{
baru->next = head;
head = baru;
}
cout<<"Memasukkan data baru \n"<<endl;
}
main()
{
int pilihan, data;
do
{
cout<<"Single Linked List dengan Head dan Tail"<<endl;
cout<<"1. Masukkan Data dari Depan"<<endl;
cout<<"2. Keluar"<<endl;
cout<<"Masukkan Pilihan Anda = "; cin>>pilihan;
if (pilihan == 1)
{
cout<<"Masukkan Data = ";
cin>>data;
tambahdepan(data);
}
else if (pilihan == 2)
{
cout<<"keuar dari program...";
}
else
{
cout<<"Pilihan tidak tersedia... \n\n";
}
}
while(pilihan!=2);
}
