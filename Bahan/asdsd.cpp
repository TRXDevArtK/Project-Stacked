#include <iostream>
using namespace std;
//////////////
class aa{
	public:
		void aaa();
}r;

void aa::aaa(){
	cout<<"ahsdkwd";
	n.bbb();
}
////////////////
class bb{
	public:
		void bbb();
		this->bbb();
}n;

void bb::bbb(){
	aaa();
	cout<<"122312";
}
//////////////////////

main(){
	bb qw;
	qw.bbb();
}
