#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n);
int combination(int n, int r);
int get_integer();


int main(void)
{
	int n,r,comb;
	
	n= get_integer();
	r=get_integer();
	
	comb=combination(n,r);
	
	printf("The result of C(%d, %d) is %d",n,r,comb);
}

int factorial(int n)
{
	int res=1;
	for (int i=1;i<=n;i++) 
		res= res * i;
	return res;
}

int combination(int n,int r)
{
	return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int get_integer()
{
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	return value;
}