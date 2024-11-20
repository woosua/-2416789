#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	FILE *fp=NULL;
	char word[50];
	
	fp=fopen("sample.txt", "r");
	if (fp==NULL)
		printf("Can't open file\n");
		
	while(fscanf(fp, "%s", word) !=EOF){
		printf("%s\n", word);
	}
	fclose(fp);
}