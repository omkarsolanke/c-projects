#include<iostream>
using namespace std;

int main(){
	
	int i,j,k;
	
	for(i=1,k=0;i<=5;++i,k=0){
		for(j=1;j<=5-i;++j){
			cout<<" ";
		}
		while(k !=2*i-1){
			cout<<"*";
			++k;
		}
		cout<<"\n";
	}
	
	int x,y;
	
	for(i=0;i<=5;++i){
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	
	return 0;
}


