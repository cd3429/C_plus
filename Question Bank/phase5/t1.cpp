/*

1. Create a Calculator in C++ by using all types of user
defined functions. User can perform all types of basic
arithmetic operations until he/she wants.

*/

#include<stdio.h>

infcalc(int op)
{
	int choice,a,b ;
	
	puts("\n\n\nFor Addiction press 1 ");
	puts("For Substraction press 2 ");
	puts("For Multiplication press 3 ");
	puts("For Division press 4 ");
	puts("For reminder press 5 ");
	puts("To exist press 0 ");
	printf("\nSelect the operation from 1 to 5 : "); scanf("%d",&choice);
	
	if(choice!=0)
	{
	printf("\nEnter first number : "); scanf("%d",&a);
	printf("Enter second number : "); scanf("%d",&b);
    }
    
	switch(choice)
	{
		case 1 : printf("\n\nThe sum of given two number is : %d",a+b); break;
		
		case 2 : printf("\n\nThe sub of given two number is : %d",a-b); break;
		
		case 3 : printf("\n\nThe multiplication of given two number is : %d",a*b); break;
		
		case 4 : printf("\n\nThe division of given two number is : %d",a/b); break;
		
		case 5 : printf("\n\nThe reminder of given two number is : %d",a%b); break;
		
		case 0 : printf("\n\nThank you for using infinite calc"); break;
		
		default : printf("\n\nInvalid Choice! Try again!");
	}
	
	if(choice!=0)
	{
		infcalc(choice);
	}
}
	
main()
{
		int op=1;
		infcalc(op);
}



