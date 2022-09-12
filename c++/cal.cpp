 #include<stdio.h>
#include<conio.h>

 main()
{


	
	float a;
	float b;
	char opr;
	float x;
	printf("Enter first Number :- ");
	scanf("%f",&a);
	printf("\n");

	
	printf("Enter second Number :- ");
	scanf("%f",&b);
	printf("\n");
	
	printf("Enter oper:- ");
	scanf("%c",&opr);
	printf("\n");

	switch(opr){
	
	
		
		case'+':
			x=a+b;
			printf("%f",x);
		
		break;
	    
		
		
		case'-':
			x = a-b;
			printf("%f",x);
			
		break;
		
		case'*':
			x=a*b;
			printf("%f",x);
			
		break;
		
		case'/':
			x=a/b;
			printf("%f",x);
			
		break;
		
		
		
	default:
		
		printf("none...");
		
	}
	



getch();			
			

	
		
		
	
	
	
	
	
	
	
	
	
	
	
}
