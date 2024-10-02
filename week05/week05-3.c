#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Input the second:");
	scanf("%d",&x);
	printf("The time is %d:%d",x/60,x%60);
	
	return 0;
}