#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct Employee
{
	int code;
	char name[51];
	float salary;
	float bonus;
	float deduction;
}Emp;

Emp readEmp();
void displayEmp();
int index(int code);
Emp employees[100];

void main(void){
	int row=25/3;
	char ch ;
	int i=-1;
	int j;
	int k;
	int count=0;
	int r=11;
	int x=1;
	int code;
	int search;

	do{
		clrscr();
		gotoxy(40,row);
		printf("1-Enter Employee");
		gotoxy(40,row+1);
		printf("2-Display Employees");
		gotoxy(40,row+2);
		printf("3-Search");
		gotoxy(40,row+3);
		printf("4-Exit");
		ch = getch();


		switch(ch){
			case '1':
				i++;
				employees[i]=readEmp();
				count++;
				break;

			case '2' :
				clrscr();
				gotoxy(10,10);
				printf("Code");

				gotoxy(20,10);
				printf("Name");

				gotoxy(47,10);
				printf("NetSalary");


				for(j=0;j<count;j++){

					displayEmp(employees[j],r+j);}
				getch();
				break;
			case '3':
				clrscr();
				gotoxy(40,12);
				printf("Enter the code:");
				gotoxy(56,12);

				while(!(scanf("%d",&code))){
					flushall();
					gotoxy(56,12);
					printf("      ");
					gotoxy(56,12);}

				search = index(code);
				if(search==100){
					gotoxy(40,14);
					printf("the code you've entered doesn't exist");
					getch();
				  }
				else{
					gotoxy(40,14);
					printf("%s  %0.2f",employees[search].name , employees[search].salary+employees[search].bonus-employees[search].deduction);
					getch();
					break;
					}
                break;

			case '4':
				x=0;
				break;
			default :
				gotoxy(40,row+7);
				printf("Please enter 1,2,3 or 4");
				getch();
	}
	}while(x);

}

int index(int code){
	int z;
	for(z=0 ; z<100 ; z++){
		if(code == employees[z].code)
			return z;
	}
	return 100;


}



void displayEmp(Emp e,int row){
	gotoxy(10,row);
	printf("%d",e.code);




	gotoxy(20,row);
	printf("%s",e.name);


	gotoxy(47,row);
	printf("%0.2f",e.salary+e.bonus-e.deduction);

}

Emp readEmp(){
	Emp e ;

	clrscr();
	gotoxy(10,5);
	printf("Code:");
	gotoxy(25,5);
	printf("Name:");
	gotoxy(10,10);
	printf("Salary:");
	gotoxy(10,15);
	printf("Deduction:");
	gotoxy(25,10);
	printf("Bonus:");



	gotoxy(15,5);

	while(!(scanf("%d",&e.code))){
		flushall();
		gotoxy(15,5);
		printf("      ");
		gotoxy(15,5);
	}

	flushall();
	gotoxy(30,5);
	gets(e.name);


	gotoxy(17,10);
	while(!(scanf("%f",&e.salary))){
		flushall();
		gotoxy(17,5);
		printf("      ");
		gotoxy(17,5);
	}


	gotoxy(31,10);
	while(!(scanf("%f",&e.bonus))){
		flushall();
		gotoxy(31,10);
		printf("      ");
		gotoxy(31,10);
	}

	gotoxy(20,15);
	while(!(scanf("%f",&e.deduction))){
		flushall();
		gotoxy(20,15);
		printf("      ");
		gotoxy(20,15);
	}

	return e;

}