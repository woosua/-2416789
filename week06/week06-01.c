#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Enter an integer: ");
	scanf("%d",&x);
	if(x>0){
		printf("This is positive number.");
	} else if(x<0){
		printf("This is negative number.");
	} else {
		printf("This is 0.");
	}
	return 0;
}