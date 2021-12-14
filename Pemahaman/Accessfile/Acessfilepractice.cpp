#include <iostream>
#include <fstream>

using namespace std;

main(){
	ofstream out;
	ifstream in;
	//HARUS CHAR TIDAK BOLEH STRING
	char data[100];
	int MAKS = 100;
	
	//OUTPUT DAN INPUT
	out.open("text.txt", ios::app);
	in.open("text.txt", ios::in);
	
	//SYARAT TEXT
	cin.getline(data, 100);
	
	//WRITE FILE
	out<<data;
	//out<<"ajhsgdjhd";
	out.close();
	
	//BACA FILE
	in>>data;
	cout<<data;
	in.close();
}
