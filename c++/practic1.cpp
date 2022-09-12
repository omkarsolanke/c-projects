#include<iostream>
using namespace std;
int main(){
	
	int a,b;
	cout<<"Enter first number :- ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter second number :- ";
	cin>>b;
	cout<<"\n";
	char x;
	cout<<"Enter opr (+add \n  -sub \n *mult \n /divd ) :- ";
	cin>>x;
	
	
	switch(x){
	
		case'+':
			cout<<a+b;
			break;
		
		case'-':
			cout<<a-b;
			break;
		
		case'*':
			cout<<a*b;
			break;
		
		case'/':
			cout<<a/b;
			break;
		
	default:
		cout<<"none";
	}

cout<<"\t";

	
	
	
	

	return 0;
										
	
	
	
}



