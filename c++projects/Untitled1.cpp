#include<stdio.h>
#include<conio.h>

int main(int qwe ,char *name[]){
	if(qwe < 2){
		printf("%s\n","pass your name as an argument :- ");
		
		return 0;
		
	}
	else{
		printf("Hello %s\n",name[1]);
		return 0;
	}
}
