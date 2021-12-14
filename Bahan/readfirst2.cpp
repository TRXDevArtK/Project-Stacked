#include <iostream>
#include <fstream>
using namespace std;

main(){
	filebuf myfile;
    myfile.open ("test.txt", ios::in | ios::out);
    if (!myfile.is_open()) cout << "cannot open" << endl;
    myfile.sputn("AAAA", 4);
    myfile.close();
}
