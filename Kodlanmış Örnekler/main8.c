#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void hesapla(int deger,int*yuzluk, int *ellilik,int *yirmilik,int *onluk,int *beslik,int *madeni);
	void hesapla(int deger,int*yuzluk, int *ellilik,int *yirmilik,int *onluk,int *beslik,int *madeni)
{
	*yuzluk=deger/100;
	*ellilik=(deger-(*yuzluk*100))/50;
	*yirmilik=(deger-(*yuzluk*100)-(*ellilik*50))/20;
	*onluk=(deger-(*yuzluk*100)-(*ellilik*50)-(*yirmilik*20))/10;
	*beslik=(deger-(*yuzluk*100)-(*ellilik*50)-(*yirmilik)*20-(*onluk*10))/5;
	*madeni=(deger-(*yuzluk*100)-(*ellilik*50)-(*yirmilik)*20-(*onluk*10)-(*beslik*5));
}
int main(){
	int deger,yuzluk,ellilik,yirmilik,onluk,beslik,madeni;
	printf("sayi gir : ");
	scanf("%d",&deger);
	hesapla(deger,&yuzluk,&ellilik,&yirmilik,&onluk,&beslik,&madeni);
	printf("sayi:%d\n yuzluk: %d\n ellilik: %d\n yirmilik: %d\n onluk: %d \n beslik:%d \n madeni:%d ",deger,yuzluk,ellilik,yirmilik,onluk,beslik,madeni);
	return 0;
}

