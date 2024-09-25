#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float x,y;
	
	printf("enter two integers : ");
	scanf("%f, %f", &x,&y);
	
	printf("%f / %f = %f",x,y,x/y);
	
	return 0;
}