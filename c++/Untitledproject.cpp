#include<iostream>
using namespace std;
int main(){
	int i,j;
	int n=5;
	
	for(i=0;i<=2*n;i++){
	    int c = i < n ? 2+n-i: i;
		for(j=0;j<c;j++){
			cout<<" *";
		}
		cout<<"\n";
	}
	
	
	
	
	
	
	return 0;
}
