#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <time.h>
#include <sstream>
#include <ctime>

using namespace std;

time_t waktu;

struct itemlist{
	char c4[15] = "C4";char d[15] = "Delanggu";char bm[15] = "BerasMerah";
	char kc4[15] = "C1234E";char kd[15] = "D23HJA";char kbm[15] = "A23EED";
	char hc4[15] = "120000";char hd[15] = "115000";char hbm[15] = "160000";
	char gc4[15] = "Super";char gd[15] = "Standart";char gbm[15] = "Spesial";
	char from[15] = "Distributor";
}it;

struct stack1{
    char *c4= it.c4;char *d = it.d;char *bm = it.bm;
	char *kc4 = it.kc4;char *kd = it.kd;char *kbm = it.kbm;
    char *hc4 = it.hc4;char *hd = it.hd;char *hbm = it.hbm;
    char *gc4 = it.gc4;char *gd = it.gd;char *gbm = it.gbm;
    char *kodeunik;
    char *from = it.from;
    long long int tm = time(&waktu);
    char *dectime = ctime(&waktu);
	struct stack1* next; 
	struct stack1* prev; 
}; struct stack1 *head1 = NULL, *last1 = NULL, *curr1 = NULL;

struct stack2{
    char *c4= it.c4;char *d = it.d;char *bm = it.bm;
	char *kc4 = it.kc4;char *kd = it.kd;char *kbm = it.kbm;
    char *hc4 = it.hc4;char *hd = it.hd;char *hbm = it.hbm;
    char *gc4 = it.gc4;char *gd = it.gd;char *gbm = it.gbm;
    char *kodeunik;
    char *from = it.from;
    long long int tm = time(&waktu);
    char *dectime = ctime(&waktu);
	struct stack2* next; 
	struct stack2* prev; 
}; struct stack2 *head2 = NULL, *last2 = NULL, *curr2 = NULL;

struct stack3{
    char *c4= it.c4;char *d = it.d;char *bm = it.bm;
	char *kc4 = it.kc4;char *kd = it.kd;char *kbm = it.kbm;
    char *hc4 = it.hc4;char *hd = it.hd;char *hbm = it.hbm;
    char *gc4 = it.gc4;char *gd = it.gd;char *gbm = it.gbm;
    char *kodeunik;
    char *from = it.from;
    long long int tm = time(&waktu);
    char *dectime = ctime(&waktu);
	struct stack3* next; 
	struct stack3* prev; 
}; struct stack3 *head3 = NULL, *last3 = NULL, *curr3 = NULL;

struct stack4{
    char *c4= it.c4;char *d = it.d;char *bm = it.bm;
	char *kc4 = it.kc4;char *kd = it.kd;char *kbm = it.kbm;
    char *hc4 = it.hc4;char *hd = it.hd;char *hbm = it.hbm;
    char *gc4 = it.gc4;char *gd = it.gd;char *gbm = it.gbm;
    char *kodeunik;
    char *from = it.from;
    long long int tm = time(&waktu);
    char *dectime = ctime(&waktu);
	struct stack4* next; 
	struct stack4* prev; 
}; struct stack4 *head4 = NULL, *last4 = NULL, *curr4 = NULL;

struct gstack1{
    char *c4= it.c4;char *d = it.d;char *bm = it.bm;
	char *kc4 = it.kc4;char *kd = it.kd;char *kbm = it.kbm;
    char *hc4 = it.hc4;char *hd = it.hd;char *hbm = it.hbm;
    char *gc4 = it.gc4;char *gd = it.gd;char *gbm = it.gbm;
    char *kodeunik;
    char *from = it.from;
    long long int tm = time(&waktu);
    char *dectime = ctime(&waktu);
	struct gstack1* next; 
	struct gstack1* prev; 
}; struct gstack1 *ghead1 = NULL, *glast1 = NULL, *gcurr1 = NULL;

struct gstack2{
    char *c4= it.c4;char *d = it.d;char *bm = it.bm;
	char *kc4 = it.kc4;char *kd = it.kd;char *kbm = it.kbm;
    char *hc4 = it.hc4;char *hd = it.hd;char *hbm = it.hbm;
    char *gc4 = it.gc4;char *gd = it.gd;char *gbm = it.gbm;
    char *kodeunik;
    char *from = it.from;
    long long int tm = time(&waktu);
    char *dectime = ctime(&waktu);
	struct gstack2* next; 
	struct gstack2* prev; 
}; struct gstack2 *ghead2 = NULL, *glast2 = NULL, *gcurr2 = NULL;


class data{
	public:
		void stacking();
		void masuk(int pil);
		void distrib();
		void saldo();
		void menus();
		int getCount(int pil2);
		void gstack();
		void s1(int pil, int pil2),s2(int pil, int pil2),
		s3(int pil, int pil2),s4(int pil, int pil2);
		void gs(int pil, int pil2);
};

int data::getCount(int pil2) 
{ 
	int count = 1;  // Initialize count 
	if(pil2 == 1){
	    struct stack1* curr1 = head1;  // Initialize current 
	    while (curr1 != NULL) 
	    { 
	        count++; 
	        curr1 = curr1->next; 
	    }
	    return count;
	}
	    
	else if(pil2 == 2){
	    struct stack2* curr2 = head2;  // Initialize current 
	    while (curr1 != NULL) 
	    { 
	        count++; 
	        curr2 = curr2->next; 
	    }
	    return count; 
	}
	    
	else if(pil2 == 3){
	    struct stack3* curr3 = head3;  // Initialize current 
	    while (curr3 != NULL) 
	    { 
	        count++; 
	        curr3 = curr3->next; 
	    }
	    return count;
	}
	
	else if(pil2 == 4){
	    struct stack4* curr4 = head4;  // Initialize current 
	    while (curr4 != NULL) 
	    { 
	        count++; 
	        curr4 = curr4->next; 
	    }
	    return count;
	}
	
	else if(pil2 == 5){
	    struct gstack1* gcurr1 = ghead1;  // Initialize current 
	    while (gcurr1 != NULL) 
	    { 
	        count++; 
	        gcurr1 = gcurr1->next; 
	    }
	    return count;
	}
	
	else if(pil2 == 6){
	    struct gstack2* gcurr2 = ghead2;  // Initialize current 
	    while (gcurr2 != NULL) 
	    { 
	        count++; 
	        gcurr2 = gcurr2->next; 
	    }
	    return count;
	}
}

void data::gs(int pil, int pil2){
	system("cls");
	srand(time(NULL));
    int range = 99999 - 10000 + 1;
	int num = rand() % 99999 + 10000;
	char pil3;
	int pil4;
	cout<<"||===Data di tumpukan anda pilih sudah penuh===||"<<endl;
	cout<<"Apa anda ingin memasukkan data yang berlebih ke gudang ? (Y/T) : ";cin>>pil3;
	if(pil3 == 'y' || pil3 == 'Y'){
		cout<<"Di gudang ada 2 tumpukan tersisa silahkan masukkan : (1/2) :";cin>>pil4;
		if(pil4 == 1){
			struct gstack1*new_node = (struct gstack1*)malloc(sizeof(struct gstack1));
			new_node = new(gstack1);
			ofstream infile;
			infile.open("gdata1.txt",ios::app);
			long long int uang;
			ifstream in("saldo.txt",ios::in);
			in>>uang;
			in.close();
			cout<<endl;
			if(getCount(5) < 11){
				if(pil == 1 && uang >= 120000){
					long long int harga = 120000;
					int hasil = uang-harga;
					ofstream outsaldo;
					outsaldo.open("Saldo.txt", ios::out);
					outsaldo<<hasil;
					outsaldo.close();
					cout<<"No.          : "<<getCount(6)<<endl;
					cout<<"Jenis Beras  : "<<new_node->c4<<endl;
					cout<<"Kualitas     : "<<new_node->gc4<<endl;
					cout<<"Kode Beras   : "<<new_node->kc4<<endl;
					cout<<"Kode Unik    : "<<num<<endl;
					cout<<"Dari         : "<<new_node->from<<endl;
					cout<<"Waktu        : "<<new_node->dectime<<endl;
					cout<<"Harga Beras  : ";cin>>new_node->hc4;cout<<endl;
					////////////OPERASI FILE/////////////
					infile<<getCount(6)<<" ";
					infile<<new_node->c4<<" ";
					infile<<new_node->kc4<<" ";
					infile<<num<<" ";
					infile<<new_node->hc4<<" ";
					infile<<new_node->from<<" ";
					infile<<new_node->dectime;
					}
				else if(pil == 2 && uang >= 115000){
					long long int harga = 115000;
					int hasil = uang-harga;
					ofstream outsaldo;
					outsaldo.open("Saldo.txt", ios::out);
					outsaldo<<hasil;
					outsaldo.close();
					cout<<"No.          : "<<getCount(6);
					cout<<"Jenis Beras  : "<<new_node->d<<endl;
					cout<<"Kualitas     : "<<new_node->gd<<endl;
					cout<<"Kode Beras   : "<<new_node->kd<<endl;
					cout<<"Kode Unik    : "<<num<<endl;
					cout<<"Dari         : "<<new_node->from<<endl;
					cout<<"Waktu        : "<<new_node->dectime<<endl;
					cout<<"Harga Beras  : ";cin>>new_node->hd;cout<<endl;
					////////////OPERASI FILE/////////////
					infile<<getCount(6)<<" ";
					infile<<new_node->d<<" ";
					infile<<new_node->kd<<" ";
					infile<<num<<" ";
					infile<<new_node->hd<<" ";
					infile<<new_node->from<<" ";
					infile<<new_node->dectime;
				}
				else if(pil == 3 && uang >= 160000){
					long long int harga = 160000;
					int hasil = uang-harga;
					ofstream outsaldo;
					outsaldo.open("Saldo.txt", ios::out);
					outsaldo<<hasil;
					outsaldo.close();
					cout<<"No.          : "<<getCount(6)<<endl;
					cout<<"Jenis Beras  : "<<new_node->bm<<endl;
					cout<<"Kualitas     : "<<new_node->gbm<<endl;
					cout<<"Kode Beras   : "<<new_node->kbm<<endl;
					cout<<"Kode Unik    : "<<num<<endl;
					cout<<"Dari         : "<<new_node->from<<endl;
					cout<<"Waktu        : "<<new_node->dectime<<endl;
					cout<<"Harga Beras  : ";cin>>new_node->hbm;cout<<endl;
					////////////OPERASI FILE/////////////
					infile<<getCount(6)<<" ";
					infile<<new_node->bm<<" ";
					infile<<new_node->kbm<<" ";
					infile<<num<<" ";
					infile<<new_node->hbm<<"  ";
					infile<<new_node->from<<" ";
					infile<<new_node->dectime;
				}
				else{
					char pil3;
					cout<<endl;
					cout<<"||==MAAF UANG ANDA TIDAK CUKUP==||"<<endl;
					cout<<"apa anda ingin kembali ke menu ? (Y/T) : ";cin>>pil3;
					if(pil3 == 'y' || pil3 == 'Y'){
						menus();
					}
					if(pil3 == 'T' || pil3 == 't'){
						exit(0);
					}
				}
				
				new_node->next = ghead1;
				new_node->prev = NULL;
			
				if (ghead1 != NULL)
					 ghead1->prev = new_node; 
			
				ghead1 = new_node;
				}
				else{
					char input;
					cout<<"||===Stack yang anda pilih sudah penuh===||"<<endl;
					cout<<"Apa anda ingin kembali ke menu atau tetap menginputkan ?"<<endl;
					cout<<"Menu/Input - (M/I) : ";cin>>input;
					if(input == 'M' || input == 'm'){
						menus();
					}
					else if(input == 'I' || input == 'i'){
						masuk(pil);
					}
				}
			}
		else if(pil4 == 2){
			struct gstack2*new_node = (struct gstack2*)malloc(sizeof(struct gstack2));
			new_node = new(gstack2);
			srand(time(NULL));
    		int range = 99999 - 10000 + 1;
			int num = rand() % 99999 + 10000;
			ofstream infile;
			infile.open("gdata2.txt",ios::app);
			long long int uang;
			ifstream in("saldo.txt",ios::in);
			in>>uang;
			in.close();
			cout<<endl;
			if(getCount(6) < 11){
				if(pil == 1 && uang >= 120000){
					long long int harga = 120000;
					int hasil = uang-harga;
					ofstream outsaldo;
					outsaldo.open("Saldo.txt", ios::out);
					outsaldo<<hasil;
					outsaldo.close();
					cout<<"No.          : "<<getCount(6)<<endl;
					cout<<"Jenis Beras  : "<<new_node->c4<<endl;
					cout<<"Kualitas     : "<<new_node->gc4<<endl;
					cout<<"Kode Beras   : "<<new_node->kc4<<endl;
					cout<<"Kode Unik    : "<<num<<endl;
					cout<<"Dari         : "<<new_node->from<<endl;
					cout<<"Waktu        : "<<new_node->dectime<<endl;
					cout<<"Harga Beras  : ";cin>>new_node->hc4;cout<<endl;
					////////////OPERASI FILE/////////////
					infile<<getCount(6)<<" ";
					infile<<new_node->c4<<" ";
					infile<<new_node->kc4<<" ";
					infile<<num<<" ";
					infile<<new_node->hc4<<" ";
					infile<<new_node->from<<" ";
					infile<<new_node->dectime;
					}
				else if(pil == 2 && uang >= 115000){
					long long int harga = 115000;
					int hasil = uang-harga;
					ofstream outsaldo;
					outsaldo.open("Saldo.txt", ios::out);
					outsaldo<<hasil;
					outsaldo.close();
					cout<<"No.          : "<<getCount(6);
					cout<<"Jenis Beras  : "<<new_node->d<<endl;
					cout<<"Kualitas     : "<<new_node->gd<<endl;
					cout<<"Kode Beras   : "<<new_node->kd<<endl;
					cout<<"Kode Unik    : "<<num<<endl;
					cout<<"Dari         : "<<new_node->from<<endl;
					cout<<"Waktu        : "<<new_node->dectime<<endl;
					cout<<"Harga Beras  : ";cin>>new_node->hd;cout<<endl;
					////////////OPERASI FILE/////////////
					infile<<getCount(6)<<" ";
					infile<<new_node->d<<" ";
					infile<<new_node->kd<<" ";
					infile<<num<<" ";
					infile<<new_node->hd<<" ";
					infile<<new_node->from<<" ";
					infile<<new_node->dectime;
				}
				else if(pil == 3 && uang >= 160000){
					long long int harga = 160000;
					int hasil = uang-harga;
					ofstream outsaldo;
					outsaldo.open("Saldo.txt", ios::out);
					outsaldo<<hasil;
					outsaldo.close();
					cout<<"No.          : "<<getCount(6)<<endl;
					cout<<"Jenis Beras  : "<<new_node->bm<<endl;
					cout<<"Kualitas     : "<<new_node->gbm<<endl;
					cout<<"Kode Beras   : "<<new_node->kbm<<endl;
					cout<<"Kode Unik    : "<<num<<endl;
					cout<<"Dari         : "<<new_node->from<<endl;
					cout<<"Waktu        : "<<new_node->dectime<<endl;
					cout<<"Harga Beras  : ";cin>>new_node->hbm;cout<<endl;
					////////////OPERASI FILE/////////////
					infile<<getCount(6)<<" ";
					infile<<new_node->bm<<" ";
					infile<<new_node->kbm<<" ";
					infile<<num<<" ";
					infile<<new_node->hbm<<"  ";
					infile<<new_node->from<<" ";
					infile<<new_node->dectime;
				}
				else{
					char pil3;
					cout<<endl;
					cout<<"||==MAAF UANG ANDA TIDAK CUKUP==||"<<endl;
					cout<<"apa anda ingin kembali ke menu ? (Y/T) : ";cin>>pil3;
					if(pil3 == 'y' || pil3 == 'Y'){
						menus();
					}
					if(pil3 == 'T' || pil3 == 't'){
						exit(0);
					}
				}
					
					new_node->next = ghead2;
					new_node->prev = NULL;
				
					if (ghead2 != NULL)
						 ghead2->prev = new_node; 
				
					ghead2 = new_node;
					}
					else{
						char input;
						cout<<"||===Stack yang anda pilih sudah penuh===||"<<endl;
						cout<<"Apa anda ingin kembali ke menu atau tetap menginputkan ?"<<endl;
						cout<<"Menu/Input - (M/I) : ";cin>>input;
						if(input == 'M' || input == 'm'){
							menus();
						}
						else if(input == 'I' || input == 'i'){
							masuk(pil);
						}
					}
			}
		}
	if(pil3 == 't' || pil3 == 'T'){
		system("cls");
		menus();
	}
}

void data::s1(int pil, int pil2){
	struct stack1*new_node = (struct stack1*)malloc(sizeof(struct stack1));
	new_node = new(stack1);
	srand(time(NULL));
    int range = 99999 - 10000 + 1;
	int num = rand() % 99999 + 10000;
	ofstream infile;
	infile.open("data1.txt",ios::app);
	long long int uang;
	ifstream in("saldo.txt",ios::in);
	in>>uang;
	in.close();
	cout<<endl;
	if(getCount(pil2) < 11){
		if(pil == 1 && uang >= 120000){
			long long int harga = 120000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->c4<<endl;
			cout<<"Kualitas     : "<<new_node->gc4<<endl;
			cout<<"Kode Beras   : "<<new_node->kc4<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hc4;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->c4<<" ";
			infile<<new_node->kc4<<" ";
			infile<<num<<" ";
			infile<<new_node->hc4<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 2 && uang >= 115000){
			long long int harga = 115000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2);
			cout<<"Jenis Beras  : "<<new_node->d<<endl;
			cout<<"Kualitas     : "<<new_node->gd<<endl;
			cout<<"Kode Beras   : "<<new_node->kd<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hd;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->d<<" ";
			infile<<new_node->kd<<" ";
			infile<<num<<" ";
			infile<<new_node->hd<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 3 && uang >= 160000){
			long long int harga = 160000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->bm<<endl;
			cout<<"Kualitas     : "<<new_node->gbm<<endl;
			cout<<"Kode Beras   : "<<new_node->kbm<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hbm;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->bm<<" ";
			infile<<new_node->kbm<<" ";
			infile<<num<<" ";
			infile<<new_node->hbm<<"  ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else{
			char pil3;
			cout<<endl;
			cout<<"||==MAAF UANG ANDA TIDAK CUKUP==||"<<endl;
			cout<<"apa anda ingin kembali ke menu ? (Y/T) : ";cin>>pil3;
			if(pil3 == 'y' || pil3 == 'Y'){
				menus();
			}
			if(pil3 == 'T' || pil3 == 't'){
				exit(0);
			}
		}
	}
 	else{
		gs(pil, pil2);
	}
	
	new_node->next = head1;
	new_node->prev = NULL;

	if (head1 != NULL)
		 head1->prev = new_node; 

	head1 = new_node;
}

void data::s2(int pil, int pil2){
	struct stack2*new_node = (struct stack2*)malloc(sizeof(struct stack2));
	new_node = new(stack2);
	srand(time(NULL));
    int range = 99999 - 10000 + 1;
	int num = rand() % 99999 + 10000;
	ofstream infile;
	infile.open("data2.txt",ios::app);
	long long int uang;
	ifstream in("saldo.txt",ios::in);
	in>>uang;
	in.close();
	cout<<endl;
	if(getCount(pil2) < 11){
		if(pil == 1 && uang >= 120000){
			long long int harga = 120000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->c4<<endl;
			cout<<"Kualitas     : "<<new_node->gc4<<endl;
			cout<<"Kode Beras   : "<<new_node->kc4<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hc4;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->c4<<" ";
			infile<<new_node->kc4<<" ";
			infile<<num<<" ";
			infile<<new_node->hc4<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 2 && uang >= 115000){
			long long int harga = 115000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2);
			cout<<"Jenis Beras  : "<<new_node->d<<endl;
			cout<<"Kualitas     : "<<new_node->gd<<endl;
			cout<<"Kode Beras   : "<<new_node->kd<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hd;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->d<<" ";
			infile<<new_node->kd<<" ";
			infile<<num<<" ";
			infile<<new_node->hd<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 3 && uang >= 160000){
			long long int harga = 160000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->bm<<endl;
			cout<<"Kualitas     : "<<new_node->gbm<<endl;
			cout<<"Kode Beras   : "<<new_node->kbm<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hbm;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->bm<<" ";
			infile<<new_node->kbm<<" ";
			infile<<num<<" ";
			infile<<new_node->hbm<<"  ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else{
			char pil3;
			cout<<endl;
			cout<<"||==MAAF UANG ANDA TIDAK CUKUP==||"<<endl;
			cout<<"apa anda ingin kembali ke menu ? (Y/T) : ";cin>>pil3;
			if(pil3 == 'y' || pil3 == 'Y'){
				menus();
			}
			if(pil3 == 'T' || pil3 == 't'){
				exit(0);
			}
		}
	}
 	else{
		gs(pil,pil2);
	}
	
	new_node->next = head2;
	new_node->prev = NULL;

	if (head2 != NULL)
		 head2->prev = new_node; 

	head2 = new_node;
}

void data::s3(int pil, int pil2){
	struct stack3*new_node = (struct stack3*)malloc(sizeof(struct stack3));
	new_node = new(stack3);
	srand(time(NULL));
    int range = 99999 - 10000 + 1;
	int num = rand() % 99999 + 10000;
	ofstream infile;
	infile.open("data3.txt",ios::app);
	long long int uang;
	ifstream in("saldo.txt",ios::in);
	in>>uang;
	in.close();
	cout<<endl;
	if(getCount(pil2) < 11){
		if(pil == 1 && uang >= 120000){
			long long int harga = 120000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->c4<<endl;
			cout<<"Kualitas     : "<<new_node->gc4<<endl;
			cout<<"Kode Beras   : "<<new_node->kc4<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hc4;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->c4<<" ";
			infile<<new_node->kc4<<" ";
			infile<<num<<" ";
			infile<<new_node->hc4<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 2 && uang >= 115000){
			long long int harga = 115000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2);
			cout<<"Jenis Beras  : "<<new_node->d<<endl;
			cout<<"Kualitas     : "<<new_node->gd<<endl;
			cout<<"Kode Beras   : "<<new_node->kd<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hd;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->d<<" ";
			infile<<new_node->kd<<" ";
			infile<<num<<" ";
			infile<<new_node->hd<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 3 && uang >= 160000){
			long long int harga = 160000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->bm<<endl;
			cout<<"Kualitas     : "<<new_node->gbm<<endl;
			cout<<"Kode Beras   : "<<new_node->kbm<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hbm;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->bm<<" ";
			infile<<new_node->kbm<<" ";
			infile<<num<<" ";
			infile<<new_node->hbm<<"  ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else{
			char pil3;
			cout<<endl;
			cout<<"||==MAAF UANG ANDA TIDAK CUKUP==||"<<endl;
			cout<<"apa anda ingin kembali ke menu ? (Y/T) : ";cin>>pil3;
			if(pil3 == 'y' || pil3 == 'Y'){
				menus();
			}
			if(pil3 == 'T' || pil3 == 't'){
				exit(0);
			}
		}
	}
 	else{
		gs(pil,pil2);
	}
	
	new_node->next = head3;
	new_node->prev = NULL;

	if (head3 != NULL)
		 head3->prev = new_node; 

	head3 = new_node;
}

void data::s4(int pil, int pil2){
	struct stack4*new_node = (struct stack4*)malloc(sizeof(struct stack4));
	new_node = new(stack4);
	srand(time(NULL));
    int range = 99999 - 10000 + 1;
	int num = rand() % 99999 + 10000;
	ofstream infile;
	infile.open("data4.txt",ios::app);
	long long int uang;
	ifstream in("saldo.txt",ios::in);
	in>>uang;
	in.close();
	cout<<endl;
	if(getCount(pil2) < 11){
		if(pil == 1 && uang >= 120000){
			long long int harga = 120000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->c4<<endl;
			cout<<"Kualitas     : "<<new_node->gc4<<endl;
			cout<<"Kode Beras   : "<<new_node->kc4<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hc4;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->c4<<" ";
			infile<<new_node->kc4<<" ";
			infile<<num<<" ";
			infile<<new_node->hc4<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 2 && uang >= 115000){
			long long int harga = 115000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2);
			cout<<"Jenis Beras  : "<<new_node->d<<endl;
			cout<<"Kualitas     : "<<new_node->gd<<endl;
			cout<<"Kode Beras   : "<<new_node->kd<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hd;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->d<<" ";
			infile<<new_node->kd<<" ";
			infile<<num<<" ";
			infile<<new_node->hd<<" ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else if(pil == 3 && uang >= 160000){
			long long int harga = 160000;
			int hasil = uang-harga;
			ofstream outsaldo;
			outsaldo.open("Saldo.txt", ios::out);
			outsaldo<<hasil;
			outsaldo.close();
			cout<<"No.          : "<<getCount(pil2)<<endl;
			cout<<"Jenis Beras  : "<<new_node->bm<<endl;
			cout<<"Kualitas     : "<<new_node->gbm<<endl;
			cout<<"Kode Beras   : "<<new_node->kbm<<endl;
			cout<<"Kode Unik    : "<<num<<endl;
			cout<<"Dari         : "<<new_node->from<<endl;
			cout<<"Waktu        : "<<new_node->dectime<<endl;
			cout<<"Harga Beras  : ";cin>>new_node->hbm;cout<<endl;
			////////////OPERASI FILE/////////////
			infile<<getCount(pil2)<<" ";
			infile<<new_node->bm<<" ";
			infile<<new_node->kbm<<" ";
			infile<<num<<" ";
			infile<<new_node->hbm<<"  ";
			infile<<new_node->from<<" ";
			infile<<new_node->dectime;
		}
		else{
			char pil3;
			cout<<endl;
			cout<<"||==MAAF UANG ANDA TIDAK CUKUP==||"<<endl;
			cout<<"apa anda ingin kembali ke menu ? (Y/T) : ";cin>>pil3;
			if(pil3 == 'y' || pil3 == 'Y'){
				menus();
			}
			if(pil3 == 'T' || pil3 == 't'){
				exit(0);
			}
		}
	}
	
	else{
		gs(pil,pil2);
	}
	
	new_node->next = head4;
	new_node->prev = NULL;

	if (head4 != NULL)
		 head4->prev = new_node; 

	head4 = new_node;
}

void data::masuk(int pil){
	system("cls");
	viewmasuk:
	int pil2;
	cout<<"=====Di toko ada 4 tumpukan====="<<endl;
	cout<<"Masukkan ke tumpukan ke (1-4) : ";cin>>pil2;
	if(pil2 == 1){
		s1(pil, pil2);
	}

	else if(pil2 == 2){
		s2(pil, pil2);
	}
	
	else if(pil2 == 3){
		s3(pil, pil2);
	}

	else if(pil2 == 4){
		s4(pil,pil2);
	}
	
 	else{
 		system("cls");
		cout<<"||===Maaf pilihan anda tidak tepat===||"<<endl;
		cout<<"||========Silahkan Coba Lagi=========||"<<endl;
		cout<<endl;
		goto viewmasuk;
	}
	
	system("cls");
	menus();
}

void data::menus(){
	system("cls");
	intomenu:
	int pil;
	cout<<"==========MENU=========="<<endl;
	cout<<"1.Beli dari distributor"<<endl;
	cout<<"2.Saldo"<<endl;
	cout<<"3.Tampilkan"<<endl;
	cout<<"========================"<<endl;
	cout<<"Masukkan Pilihan : ";cin>>pil;
	if(pil == 1){
		distrib();
	}
	else if(pil == 2){
		saldo();
	}
	else if(pil == 3){
		
	}
	else{
		system("cls");
		cout<<"===Pilihan pilihan menu tidak ada==="<<endl;
		cout<<"=======Mohon masukkan kembali======="<<endl<<endl;
		goto intomenu;
	}
	cout<<endl;
}

void data::saldo(){
	char pil;
	long long int input;
	long long int output;
	////insaldo
	atap:
	ifstream insaldo("Saldo.txt");
	insaldo>>output;
    insaldo.close();
    //////
    system("cls");
	cout<<"Saldo anda saat ini adalah : Rp."<<output<<endl;
	cout<<"Apa anda ingin mengisi saldo saat ini ? (Y/T) : ";cin>>pil;
	if(pil == 'y' || pil == 'Y'){
		cout<<"Masukkan saldo yang akan di tambahkan : ";cin>>input;
		int hasil = input+output;
		ofstream outsaldo;
		outsaldo.open("Saldo.txt", ios::out);
		outsaldo<<hasil;
		outsaldo.close();
		goto atap;
	}
	if(pil == 't' || pil == 'T'){
		system("cls");
		menus();
 }
}

void data::distrib(){
	system("cls");
	int pil;
	cout<<"=========DISTRIBUTOR=========="<<endl;
	cout<<"1.Beras C4 (Kualitas Super)"<<endl;
	cout<<"2.Beras Delanggu (Biasa)"<<endl;
	cout<<"3.Beras Merah"<<endl;
	cout<<"Masukkan pilihan : ";cin>>pil;
	masuk(pil);
}

main(){
	int pil;
	backtotop:
	data r;
	r.menus();
}
