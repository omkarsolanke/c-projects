
#include<stdio.h>
#include<conio.h>

main()
{

printf("Happy Day");
printf("\n");
	
char a[20];
int b;
int c;
printf("Enter your name :- \n");
scanf("%s",a);
printf("Enter your marks :- \n");
scanf("%d",b);
printf("\n");
printf("Hi");
printf(a);


if(b<=50){
	printf("WOOHOO...you are eligiable \n\n");
}
else{
	printf("try next year");
}

if(b<=50){
	
printf("Enter your phone Number for contact :- ");
scanf("%d",c);
}

printf("\n");
printf("Thank you...");
printf("we will call you on %d",c);



getch();	
	
	
}
