#include<iostream>

int main(){
	
	float a,b,c;
	
	printf("Enter a number :- ");
	scanf("%f",&a);
	printf("\n");
	printf("Enter b number :- ");
	scanf("%f",&b);
	printf("\n");
	printf("Enter c number :- ");
	scanf("%f",&c);
	printf("\n");
	

	
	if(a<b){
		printf("b is greather than a \n");
	}
	
	if(a>b){
		printf("b is less than a \n");
	}
	
	if(b>c){
		printf("b is greather than c \n");
	}
	
	if(b<c){
		printf("b is less than c \n");
	
	}
	
	if(a>c){
		printf("a is greather than c \n");
	}
	
	if(a<c){
		printf("a is less than c \n");
	
		
	return 0;
}
