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

void main(void){
	int i;
	int j;
	int row=11;
	Emp employees[3];

	for(i=0;i<3;i++){
	   employees[i]=readEmp();

	}
	clrscr();
	gotoxy(10,10);
	printf("Code");

	gotoxy(20,10);
	printf("Name");

	gotoxy(47,10);
	printf("NetSalary");


	for(j=0;j<3;j++){

		displayEmp(employees[j],row+j);

	}


	getch();

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