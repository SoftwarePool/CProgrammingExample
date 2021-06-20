#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,toplam,ort,cikarma, girilen;
	printf("isleme alinacak ilk sayiyi giriniz:");
	scanf("%f",&a);
	printf("isleme alinacak ikinci sayiyi giriniz:");
	scanf("%f",&b);
	toplam=a+b;
	cikarma=a-b;
	ort=a+b/2;
	printf("Hangi islemi yapmak istersiniz? \n 1.Toplama \n 2.Cikarma \n 3.Ortalama Hesaplama \n");
	scanf("%f",&girilen);
	if(girilen==1){
		printf("Toplama isleminiz gerceklestirilmistir. Sonucunuz: %f",toplam );
	}
	else if(girilen==2){
		printf("Cikarma isleminiz gerceklestirilmistir. Sonucunuz: %f", cikarma);
	}
	else
	{
		printf("Ortalama hesaplama isleminiz gerceklestirilmistir. Sonucunuz: %f",ort);
	}
	
	return 0;
}
