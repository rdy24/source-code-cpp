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
void tambahbelakang(int databaru)
{
Node *baru,*temp;
baru = new Node;
baru-> data = databaru;
baru-> next = NULL;
if(cek()==0)
{
head=baru;
tail=baru;
tail->next = NULL;
}
else
{
tail->next = baru;
tail=baru;
}
cout<<"Memasukkan data baru \n\n";
}
main()
{
int pilihan, data;
do
{
cout<<"Single Linked List dengan Head dan Tail"<<endl;
cout<<"1. Masukkan Data dari Belakang"<<endl;
cout<<"2. Keluar"<<endl;
cout<<"Masukkan Pilihan Anda = "; cin>>pilihan;
if (pilihan == 1)
{
cout<<"Masukkan Data = ";
cin>>data;
tambahbelakang(data);
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
