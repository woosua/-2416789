#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp;
	char word[50];
	
	fp=fopen("sample.txt", "w");
	if (fp==NULL){
		printf("Failed to open file\n");
		return 1;
	}
	
	for (int i=0; i<3; i++){
		printf("input a word:");
		scanf("%s", word);
		fprintf(fp, "%s\n", word);
	}
	
	fclose(fp);
	printf("The words were saved in sample.txt.\n");
	
	return 0;
	
}