#include <iostream>
#include <conio.h>
#include <iomanip> //setw()
using namespace std;
struct node
{
  int data;
  node *next; //untuk menghubungkan dengan node lain, tipe data dibuat sama seperti aturan pengunaan pointer.
};
node* head;
node* tail;
node* curr;
node* entry;
node* del;
void inisialisasi()
{
head = NULL; //menjadikan head ke NULL
tail = NULL; //menjadikan tail ke NULL
}
void input(int dt)//fungsi untuk menginput data
{
  entry = (node* )malloc(sizeof(node)); //alokasi memori
  entry ->data = dt;
  entry ->data = NULL;
  if(head==NULL)
  {
    head = entry;
    tail = head;
  }
  else
  {
    tail-> next = entry;
    tail = entry;
  }
}
void hapus() //fungsi untuk menghapus
{
  int simpan;
  if(head==NULL)
  {
    cout<< "\nlinked list kosong, penghapusan tidak bisa dilakukan"<<endl;
  }
  else
  {
    simpan = head -> data;
    //hapus depan
    del = head;
    head= head -> next;
    delete del;
    cout<< " \ndata yang dihapus adalah "<<simpan<<endl;
    }
}
void cetak () //funsi untuk mencetak
{
  curr = head;
  if(head == NULL)
    cout<<"\ntidak ada data dalam linked list "<<endl;
    else
    {
    cout << "\nData yang ada dalam linked list adalah "<<endl;
    cout<<setw(6);
      while(curr!=NULL)
      {
        cout<<curr -> data<<"-";
        curr = curr ->next;
      }
cout<<"NULL";
  cout<<endl;
  }
}
void menu()
{
      char pilih, ulang;
      int data;
 
      do
      {
      system("cls");
      cout<<"SINGLE LINKED LIST NON CIRCULAR"<<endl;
      cout<<"-------------------------------"<<endl;
      cout<<"Menu : "<<endl;
      cout<<"1. Input data"<<endl;
      cout<<"2. Hapus data"<<endl;
      cout<<"3. Cetak Data"<<endl;
      cout<<"4. Exit"<<endl;
      cout<<"Masukkan pilihan Anda : ";
      cin>>pilih;
 
      switch(pilih)
      {
      case '1' :
            cout<<"\nMasukkan data : ";
            cin>>data;
            input(data);
            break;
      case '2' :
            hapus();
            break;
      case '3' :
            cetak();
            break;
      case '4' :
            exit(0);
            break;
      default :
            cout<<"\nPilih ulang"<<endl;
      }
      cout<<"\nKembali ke menu?(y/n)";
      cin>>ulang;
      }while(ulang=='y' || ulang=='Y');
}
 
 
int main()//fungsi utama program
{
 
      inisialisasi();
      menu();
 
      return EXIT_SUCCESS;
}


  
