#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void maks(int a[]);
void min(int b[]);

void min(int b[]){
	int i,min;
	min=b[0];
	
	for(i=1;i<10;i++){
		if(min>b[i]) 
		min=b[i];
	}
	printf("En dusuk not: %d",min);
	
}

void maks(int a[]){
	
	int i,max;
	max=a[0];
	
	for(i=1;i<10;i++){
		if(max<a[i])
			max=a[i];
	}
	printf("En buyuk not: %d",max);
}

int main() {
	
	int notlar[10]={40,60,70,20,30,87,45,65,78,80};
	maks(notlar);
	min(notlar);
	return 0;
}
