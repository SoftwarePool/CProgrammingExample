#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int saat;
	float ucret, toplam_ucret;
	printf("Calisma saatini giriniz> ");
	scanf("%d",&saat);
	printf("Saat ucretini giriniz> ");
	scanf("%f",&ucret);
	toplam_ucret = saat * ucret;
	printf("Alacagi ucret: %f\n",toplam_ucret);
	return 0;
}
