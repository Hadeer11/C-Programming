/*magic box is a n*n square that's the sum of each row and column is constant.
--n is the odd number we enter in the begining of the program.
--simply the algorithm put the first number(1) at the middle of the first row then starting from (1) to n*n check 
--if x%n==0 then write the following number in the next row but the same column
--else write the following number in the previous row and the previoius column. */

#include <stdio.h>
#include <conio.h>

void main(void){
	int n,col,row,dx,dy;
	int i =1;
	clrscr();
	do{
		printf("Please, enter odd number: ");
		scanf("%d",&n);
	}while(n%2==0);

	row = 0;
	col = n/2 ;
	dx = (80-n)/(n+1);
	dy= (25-n)/(n+1);
	clrscr();
	gotoxy((col+1)*dx,(row+1)*dy);


	printf("%d",i);



	for(i;i<n*n;i++){
		if(i%n == 0 )
			row++;
		else{
			row--;
			col--;
			}
		if(row<0)
			row = n-1 ;
		else if (row>n-1)
			row = 0;

		if(col<0)
			col=n-1;
		else if(col>n-1)
			col = 0;

		gotoxy((col+1)*dx , (row+1)*dy);
		printf("%d",i);

	}
	getch();

}