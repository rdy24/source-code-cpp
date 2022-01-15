#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
};
Node *head, *tail;

int cek()
{
	if(head == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void tambahdepan (int databaru)
{
	Node *baru;
	baru = new Node;
	baru->data = databaru;
	baru->next = NULL;
	baru->prev = NULL;
	if(cek()==0)
	{
		head=baru;
		tail=head;
		head->next = NULL;
		head->prev = NULL;
		tail->prev = NULL;
		tail->next = NULL;
	}
	else
	{
		baru->next = head;
		head->prev = baru;
		head = baru;
	}
cout<<"Data ditambahkan \n\n";
}

void tambahbelakang(int databaru)
{
	Node *baru;
	baru = new Node;
	baru->data = databaru;
	baru->next = NULL;
	baru->prev = NULL;
	if (cek() == 0)
	{
		head = baru;
		tail = head;
		head->next = NULL;
		head->prev = NULL;
		tail->prev = NULL;
		tail->next = NULL;
	}
	else
	{
		tail->next = baru;
		baru->prev = tail;
		tail = baru;
		tail->next = NULL;
	}
cout<<"Data ditambahkan \n\n";
}
void tampil() {
	Node *temp; temp = head;
	if(cek()==1)
	{
		while(temp!=tail->next)
		{
			cout<<temp->data<<ends;
			temp=temp->next;
		}
	cout<<endl<<endl;
	}
	else
	cout<<"Tidak ada data \n\n";
}

void hapusdepan()
{
	Node *hapus;
	int cap;
	if (cek()==1)
	{
		if(head->next != NULL)
		{
			hapus = head;
			cap = hapus->data;
			head = head->next;
			head->prev = NULL;
			delete hapus;
		}
		else
		{
			cap = head->data;
			head = NULL;
			tail = NULL;
		}
	cout<<"Data "<<cap<<" terhapus\n\n";
}
	else cout<<"Tidak ada data \n\n";
}

void hapusbelakang()
{
	Node *hapus;
	int cap;
	if (cek()==1)
	{
		if(head->next != NULL)
		{
			hapus = tail;
			cap = tail->data;
			tail = tail->prev;
			tail->next = NULL;
			delete hapus;
		}
	else
	{
		cap = head->data;
		head = NULL;
		tail = NULL;
	}
	cout<<"Data "<<cap<<" terhapus\n\n";
	}
	else cout<<"Tidak ada data \n\n";
}

main()
{
	int pilihan, data;
	do
	{
	cout<<"Double Linked ListDengan Head danTail"<<endl;
	cout<<"1. Masukkan Data dari Depan"<<endl;
	cout<<"2. Masukkan Data dari Belakang"<<endl;
	cout<<"3. Tampil"<<endl;
	cout<<"4. Hapus Data dari Depan"<<endl;
	cout<<"5. Hapus Data dari Belakang"<<endl;
	cout<<"6. Keluar"<<endl;
	cout<<"Masukkan Pilihan Anda = "; cin>>pilihan;
	if (pilihan == 1)
	{
	cout<<"Masukkan Data = "; cin>>data;
	tambahdepan(data);
	}
	else if(pilihan == 2)
	{
	cout<<"Masukkan Data = "; cin>>data;
	tambahbelakang(data);
	}
	else if(pilihan == 3)
	{
	tampil();
	}
	else if(pilihan == 4)
	{
		hapusdepan();
	}
	else if(pilihan == 5)
	{
		hapusbelakang();
	}
	else if(pilihan == 6)
	{
		cout<<"keluar dari program...";
	}
	else
	{
	cout<<"pilihan tidak tersedia... \n\n";
	}
}
while(pilihan!=6);}
