//find the minimum and maximum number of an array of five elements.

#include <stdio.h>
#include <conio.h>

void main(void){
	int arr[5];
	int max , min,i,j ;
	clrscr();
	printf("Enter 5 integers: ");
	for(i = 0 ; i<5 ; i++){
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	min = arr[0];

	for(j = 1 ; j<5 ; j++){
		if(arr[j]>max)
			max = arr[j];
		else
			min = arr[j];
	}
	printf("\nmax: %d",max);
	printf("\nmin: %d",min);

	getch();
}