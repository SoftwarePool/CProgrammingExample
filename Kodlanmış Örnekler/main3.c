#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	
	int i,j=0;
	int notlar[8]={10,20,30,40,50,60,70,80};
	int guncelnotlar[8];
	
	for(i=7;i>=0;i--){
		guncelnotlar[j]=notlar[i];
		j++;
	}
	
	for(i=0;i<8;i++){
		printf("%5d",guncelnotlar[i]);
	}
	
	
	return 0;
}
