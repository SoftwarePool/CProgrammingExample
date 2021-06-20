#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3];
	int i,toplam;
	double orta;
	printf("3 adet sayi giriniz:");
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	toplam=0;
	for(i=0;i<3;i++)
	toplam=toplam+a[i];
	orta=toplam/3.0;
	printf("Ortalama=%3.2f",orta);
	return 0;
}
