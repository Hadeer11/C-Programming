#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void main(void){
	int size,i,*p;
	clrscr();

	printf("Enter size of array: ");

	do{
		flushall();
		gotoxy(21,1);
		printf("     ");
		gotoxy(21,1);
	}while(!(scanf("%d",&size)));

	p=(int)malloc(size*sizeof(int));


	for(i=0;i<size;i++){
		printf("element %d: ",i+1);

		do{
			flushall();
			gotoxy(12,i+2);
			printf("     ");
			gotoxy(12,i+2);
		}while(!(scanf("%d",&p[i])));

	}
	i=0;
	printf("Array:");
	while(i<size){
		printf("\t%d",p[i]);
		i++;
	}

	free(p);

	getch();


}