#include <stdio.h>
#include <conio.h>

void swap(int *x,int *y);

void main(void){
	int a ,b ;
	clrscr();
	printf("Enter first num: ");
	do{
		flushall();
		gotoxy(17,1);
		printf("     ");
		gotoxy(17,1);

	}while(!(scanf("%d",&a)));


	printf("Enter second num: ");
	do{
		flushall();
		gotoxy(18,2);
		printf("     ");
		gotoxy(18,2);

	}while(!(scanf("%d",&b)));

	swap(&a,&b);

	printf("\nAfter swap");

	printf("\nFirst num: %d",a);
	printf("\nsecond num: %d",b);




   getch();
}

void swap(int *x , int *y){
	int temp;

	temp=*x;
	*x = *y;
	*y=temp;

}