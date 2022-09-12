using namespace std;
#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
	srand(static_cast<int>(time(0)));
	int i = (int)rand()%100+1;
	int j;

	do{
	 cout<<"Enter number (1-100) :- ";
	 cin>>j;
	 if(i == j){
	 	cout<<"WOOHOO...CORRECT NUMBER \n";
	 }
	 else if(i>j){
	 	cout<<"Number is too small \n";
	 }
	 else{
	 	cout<<"Number is too large \n";
	 } 	
	}while(j>0);
	  cout<<"Number is ";
	  cout<<i;
	
	return 0;
}
