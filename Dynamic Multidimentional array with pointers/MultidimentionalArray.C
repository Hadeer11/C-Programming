#include <stdio.h>
#include <conio.h>
#include <malloc.h>


void main(void){
	int **p;
	int r,c,i,j,sumR;
	float avgC;
	clrscr();

	printf("Enter number of rows: ");

	do{
		flushall();
		gotoxy(23,1);
		printf("     ");
		gotoxy(23,1);
	}while(!(scanf("%d",&r)));



	printf("Enter number of columns: ");

	do{
		flushall();
		gotoxy(26,2);
		printf("     ");
		gotoxy(26,2);
	}while(!(scanf("%d",&c)));

	p=(int**) malloc(r*sizeof(int*));

	for(i=0;i<r;i++){
		p[i]=(int*)malloc(c*sizeof(int));
		for(j=0;j<c;j++){


			do{
				printf("element[%d][%d]:",i,j);

			}while(!(scanf("%d",&p[i][j])));
		}
	}
	j=0;
	for(i=0;i<r;i++){
			sumR=0;
	   for(j=0;j<c;j++){
			sumR+=p[i][j];
			printf("%d\t",p[i][j]);
		}
		printf("%d",sumR);
		printf("\n");
	}

	for(i=0;i<c;i++){
		avgC=0;
		for(j=0;j<r;j++){
			avgC+=p[j][i];

		}
		printf("%0.2f\t",avgC/=r);
	}


	getch();





}