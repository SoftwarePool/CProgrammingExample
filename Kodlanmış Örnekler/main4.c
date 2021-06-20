#include <stdio.h>
#include <stdlib.h>

void ortalama(int notlar[4][3]){
	
	int satir,sutun, toplam;
	/*ortalamanin hesaplanmasi*/
	for(satir=0;satir<4;satir++){
		toplam=0;
		for(sutun=0;sutun<3;sutun++){
			toplam=toplam+notlar[satir][sutun];
		}
		printf("%d. ogrencinin ortaslamasi %0.2f\n", satir+1, toplam/3.0);
	}
}

int main() {
	
	
	int notlar[4][3];
	int satir,sutun;
	int toplam;
	
	/*notlarin klavyeden alinmasi*/
	for(satir=0;satir<4;satir++){
		for(sutun=0;sutun<3;sutun++){
			scanf("%d",&notlar[satir][sutun]);
		}
	}
	
	/*fonksiyon cagir*/
	ortalama(notlar);
	
	
	return 0;
}
