#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int id;
	char name[10];
	double grade;
};

int main(void){
	struct student s1={0, "Name", 4.00};
	s1.id=24;
	strcpy(s1.name,"Eunju");
	s1.grade=4.2;
	
	printf("ID: %d\n", s1.id);
	printf("Name: %s\n", s1.name);
	printf("Grade: %.1f\n", s1.grade);
	
	return 0;
}