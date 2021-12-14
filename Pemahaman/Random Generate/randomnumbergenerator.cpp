#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int range = 99999 - 10000 + 1;
	int num = rand() % 99999 + 10000;	
	cout<<num;
    return 0;
}
