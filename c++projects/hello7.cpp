#include<iostream>
#include<conio.h>
using namespace std;

class DATA{
	protected:
	int a,b;
	public:
	void read(){
		cout<<"Enter First Number :- \n";
		cin>>a;
		cout<<"Enter Second Number :- \n";
		cin>>b;
	}
};
class Sum : public DATA{
	private:
	int sum;
	public:
	void add(){
		sum = a+b;
		
	}
	void display(){
		cout<<"Sum of Two Number :- "<<sum;
	}
};
int main(){
	Sum A;
	A.read();
	A.add();
	A.display();
	
	getch();
	
}
