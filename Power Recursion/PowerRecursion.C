#include <stdio.h>
#include <conio.h>

long power(int num,int pow);

void main(void){
	int x,n ;
	clrscr();
	do{
	printf("Enter the number: ");
	scanf("%d",&x);
	}while(x<0);
	do{
	printf("\nEnter the power: ");
	scanf("%d",&n);
	}while(n<0);

	printf("\nThe result is: %lu",power(x,n));
	getch();



}

long power(int num, int pow){
	if(pow == 0)
		return 1;
	return num*power(num,pow-1);
}