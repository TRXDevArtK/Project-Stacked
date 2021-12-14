#include <string> // agar string bisa di deklarasikan di file header
using namespace std; //penmendekan std::
#ifndef data //apa bila mendefinisikan "data"
#define data //definisikan data

class datas{
	private:
		typedef int pilih; //Merupakan tipe data abstract (ADT) khusus int
		typedef char pilih2; //Merupakan tipe data abstract (ADT) khusus char
	public:
		//Penjelasan selanjutnya akan ada di .cpp
		void masuk(int pil);
		void distrib();
		void saldo();
		void menus();
		int getCount(int pil2);
		void gstack();
		void s1(int pil, int pil2),s2(int pil, int pil2),
		s3(int pil, int pil2),s4(int pil, int pil2);
		void gs(int pil, int pil2);
		//////////////////// Pemisahan fungsi
		void read();
		void input(int nomor, string c4, string gc4, string kc4, int kodeunik, long long int hc4, string from, string waktu, int input);
		void tampilkan();
		void ts1(),ts2(),ts3(),ts4(),tgs1(),tgs2();
		//////////////////// end
		void stack1beli(),stack2beli(),stack3beli(),stack4beli(),gstack1beli(),gstack2beli();
		void beliberas();
		void backtomenus();
};

#endif
