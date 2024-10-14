#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,sum;
	printf("Enter a number:");
	scanf("%d",&x);
	
	for(sum=0;x>0;x--){
		sum += x;
	}   
	
	printf("The result is %d",sum);
	return 0;
}