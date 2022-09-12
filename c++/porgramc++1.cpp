#include<iostream>
#include<cstdlib>
#include<windows.h>

#define WIDTH 50
#define HEIGHT 25
using namespace std;




int x = 10,y=10;

void board()
{
	
	for(int i=0;i<HEIGHT;i++){
		cout<<"\t\t#";
		
		for(int j=0;j<WIDTH;j++){
			
			if(i==0 || i == HEIGHT-1) cout<<"#";
			else if(i==y , j==x) cout<<"0";
			else cout<<" ";
			
			
		}
		cout<<"# \n";
		
	}	
	
	
}

int main(){
	board();
	x++;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0 ,0});


}
