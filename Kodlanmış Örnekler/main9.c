#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int carpim[10][10];
	int i,j;
	
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			carpim[i][j]=(i+1)*(j+1);	
			printf("%5d",carpim[i][j]);
		}	
		printf("\n");
	}


	
	return 0;
}
