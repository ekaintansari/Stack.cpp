~~~~~~~~~~~~~~~STACK~~~~~~~~~~~~~~~~
  *******EKA INTAN SARI*******
  -------->1817051022<--------
~~~~~~~PEMROGRAMAN TERSTRUKTUR~~~~~~~

#include<stdio.h>
#include<stdlib.h>

typedef int ItemType;
typedef struct simpul node;
struct simpul{
 ItemType item;
 node *next;
};

struct Stack{
 node *TOS;
};

node *baru;

void awal()
{
 puts("================================================");
 puts("                    STACK                       ");
 puts("================================================");
}

void allocated_node(ItemType x)
{
  baru = (node *) malloc (sizeof(node));
 if(baru==NULL)
 {
     printf("Alokasi Gagal\n");
     exit(1);
 }
 else
 {
     baru->item=x;
     baru->next=NULL;
 }
 
}

void inisialisasi(Stack *s)
{
     s->TOS = NULL;
}

int kosong(Stack *s)
{
     return s->TOS==NULL;
}

void push(Stack *s)
{
      baru->next = s->TOS;
      s->TOS = baru;
}

ItemType pop(Stack *s)
{
      node *temp;
      if(kosong(s))
      {
            printf("Data Kosong\n");
            return ' ';
      }
      else
      {
            temp = s->TOS;
            s->TOS = s->TOS->next;
           return temp->item;
           free(temp);
           temp=NULL;
      }
 
}

void tampil(Stack *s)
{
    Stack bantu;
    bantu = *s;
    printf("\nData Simpul ==> ");
    while(bantu.TOS!=NULL)
    {
     printf ("%& ",bantu.TOS->item);
     bantu.TOS = bantu.TOS->next;
    }
 printf("\n\n");
}

int main()
{
 int pilih,data;
 char lagi='y';
 Stack ujung;
 
 inisialisasi(&ujung);
 while(lagi=='y')
 {
  system("CLS");
  awal();
  //tampil(&ujung);
  printf("Menu Pilihan : \n");
  printf("1.   Push\n");
  printf("2.   Pop\n");
  printf("3.   Tampilkan Stack\n");
  printf("\nPilih No             : ");
  scanf("%&", &pilih);
  switch(pilih)
        {
         case 1:
               printf("Masukkan data     : ");
               scanf("%&", &data);
               allocate_node(data);
               push(&ujung);
               break;
          case 2;
                pop(&ujung);
                break;
          case 3;
                tampil(&ujung);
                break;
                     }
                     fflush(stdin);
                     printf("Lagi (y/t) ? ");
                     scanf("%c", &lagi);
                     }
                     
                     }
