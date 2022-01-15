//header file
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <string.h>
# define QSIZE 5
//deklarasi struct
typedef struct
{
      int count;
    int head,tail;
    char names[QSIZE][30];
}QUEUE; //nama struct
char *enqueue(char *);
char* dequeue();
//deklarasikan prototype fungsi
void yehez();
void irfaninda();
//deklarasi Node
QUEUE *pq;
//fungsi main
int main()
{
      //deklarasi variabel
      int pil;
      char str[30];
      QUEUE q;
      pq=&q;
      irfaninda(); //panggil fungsi inisialisasi
      do{
            system("cls"); //bersihkan layar
            printf("\tShowroom Yehezkiel : ");
            printf("\n\t______");
            printf("\n[1] Input Data Mobil");
            printf("\n[2] Delete Data Mobil");
            printf("\n[3] Show data in queue");
            printf("\n[4] Exit\n");
            printf("\nPilihan anda : ");
            scanf("%d",&pil);
            switch(pil){
            case 1:
                  printf("\nSilahkan memasukkan sebuah data : ");
                  fflush(stdin); //menghapus buffer data
                  gets(str);
                 puts(enqueue(str)); //Mencetak string hasil penambahan data yang dilakukan oleh fungsi enqueue()/
                  printf("\nSilahkan memasukkan sebuah plat : ");
                  fflush(stdin); //menghapus buffer data
                  gets(str);
                 puts(enqueue(str)); //Mencetak string hasil penambahan data yang dilakukan oleh fungsi enqueue()/
                  break;
            case 2:
                 puts(dequeue()); //Mencetak string terhapus yang dilakukan oleh fungsi enqueue()/
                  break;
            case 3:
                  yehez(); //panggil fungsi tampil()
                  break;
            case 4: exit(0);
            default: printf("\nMasukkan anda salah!!");
            }
            printf("\nPress Any Key to continue...");
            fflush(stdin); //membersihkan buffer data
            while(!kbhit());
      }
      while(1); //perulanagan dijalankan terus
    //return 0;
}
//fungsi untuk inisialisasi awal
void irfaninda()
{
      pq->head = pq->tail = pq->count= 0;
}
//fungsi untuk menambah data string dalam queue
char* enqueue(char *p)
{
      if(pq->count==QSIZE)
            return "\n\n\t\t Error: Antrian penuh";
      pq->tail= (pq->tail)%QSIZE;
      strcpy(pq->names[(pq->tail)++],p);
      pq->count++;
      return "Data telah berhasil dimasukkan";
}
//fungsi untuk menghapus data string dalam queue
char* dequeue()
{
      if(pq->count==0)
            return "\n\n\t\t Error: Antrian kosong";
      pq->head= (pq->head)%QSIZE;
      pq->count--;
      printf("\nData yang telah dihapus adalah\n:");
      return pq->names[(pq->head)++];
}
//fungsi untuk menampilkan data yang berada dalam antrian
void yehez()
{
      int i=pq->head;
      int x=0;
      if(pq->count==0)
            printf("Antrian kosong\n");
      else
      {
            while(x<pq->count)
            {
                  if(i==QSIZE)
                        i%=QSIZE;
                  printf(":%s\n",pq->names[i]);
                  i++;
                  x++;
            }
      }
}
