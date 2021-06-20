#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
int a[5]; 
int i,toplam; 
double orta;
 /*Kullanici degerlerinin dizide saklanmasi*/ 
printf("Bes tamsayi giriniz:"); 
for(i=0;i<5;++i) 
scanf("%d",&a[i]); 
/*Toplam ve ortalamanin bulunmasi*/ 
toplam=0;
 for(i=0;i<5;++i) 
 toplam=toplam+a[i]; 
 orta= toplam/5.0;
printf("Ortalama=%5.2f",orta);
return (0);
}
