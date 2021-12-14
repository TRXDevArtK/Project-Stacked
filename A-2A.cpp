#include <iostream> 
#include <queue> 

using namespace std; 

class abstrak{
	public:
	void showpq(priority_queue <int> gq);
}a;

void abstrak::showpq(priority_queue <int> gq) 
{ 
	priority_queue <int> g = gq; 
	while (!g.empty()) 
	{ 
		cout << '\t' << g.top(); 
		g.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	priority_queue <int> gquiz; 
	gquiz.push(8); 
	gquiz.push(4); 
	gquiz.push(9); 
	gquiz.push(1); 
	gquiz.push(6);
	gquiz.push(3);
	gquiz.push(7);   

	cout << "QUEUE YANG DIPRIORITASKAN : "; 
	a.showpq(gquiz); 

	cout << "Ukuran Queue() : " << gquiz.size()<<endl;
	cout << "Yang paling awal : " << gquiz.top()<<endl;
	cout << "Yang di pop : ";
	gquiz.pop();
	a.showpq(gquiz); 

	return 0; 
} 

