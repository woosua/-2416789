#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Input the year:");
	scanf("%d",&x);
	printf("Is the year %d tne leap year? %d",x,x%4==0&&x%100!=0||x%400==0);
	
	return 0;
}