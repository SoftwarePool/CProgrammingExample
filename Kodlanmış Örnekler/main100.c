#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void hosgeldiniz();
int menu();
void para_giris();
void para_iade();
void urun_secme();
void uyari();
void ariza_mesaj();
int admin_menu();
int admin();
void fiyat_gunc(float urunler[14][2]);

float kasa=100,ckasa;
float para;
int urun_secim;
	void hosgeldiniz()
		{
	 printf("-----------------------------------------------------------------------------------------------------------------------\n");
 	 printf("                                                     HOSGELDINIZ\n");
 	 printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
    return;
}

	int menu(){
	int secim;
		printf("________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t\tMENU: \n\n");
    printf("");
    printf("\t|\t1. Ulker Gofret Fiyat 1TL\t");   printf("2. Dido Fiyat 1TL\t\t"); 		printf("3. Albeni Fiyat: 0.50KRS\t|\n");         
    printf("\t|\t4. 8 Kek Fiyat: 0.25KRS\t\t");     	 	printf("5. Popkek Fiyat: 0.50KRS\t");			printf("6. Eti Browne Fiyat: 0.5KRS\t|\n");         
    printf("\t|\t7. Ikram Fiyat 1TL\t\t");    		printf("8. 9 Kat Fiyat: 0.25KRS\t\t");      	printf("9. Cizi Fiyat: 0.10KRS\t\t|\n");   
	printf("\t|\t10. Su Fiyat: 0.50KRS\t\t");    		printf("11. Ice Tea Fiyat: 0.10KRS\t");     printf("12. Kola Fiyat 1TL\t\t|\n");  
	printf("\t|\t13. Fanta Fiyat 1TL\t\t");    	 	printf("14. Soda Fiyat: 0.5KRS\t\t");       printf("15. Sut Fiyat: 0.25KRS \t\t|\n");        
    printf("\t|\t16. Quit\t\t\t");
    printf("________________________________________________________________________________________________________________________\n");
    printf("\n\n");
    
    return ;
    }
    int urun_secim;
    void urun_secme(){
	float urunler[14][2];
	int urun,fiyat,urun_secim;
		urunler[0][0]=1;
		urunler[0][1]=20;
		urunler[1][0]=1;
		urunler[1][1]=20;
		urunler[2][0]=0.50;
		urunler[2][1]=20;
		urunler[3][0]=0.25;
		urunler[3][1]=20;
		urunler[4][0]=0.50;
		urunler[4][1]=20;
		urunler[5][0]=0.5;
		urunler[5][1]=20;
		urunler[6][0]=1;
		urunler[6][1]=20;
		urunler[7][0]=0.25;
		urunler[7][1]=20;
		urunler[8][0]=0.10;
		urunler[8][1]=20;
		urunler[9][0]=0.50;
		urunler[9][1]=20;
		urunler[10][0]=0.10;
		urunler[10][1]=20;
		urunler[11][0]=1;
		urunler[11][1]=20;
		urunler[12][0]=1;
		urunler[12][1]=20;
		urunler[13][0]=0.5;
		urunler[13][1]=20;
		urunler[14][0]=0.25;
		urunler[14][1]=20;
	printf("Lutfen seciminizi giriniz: ");
    scanf("%d",&urun_secim);
	 if(urun_secim>para){
    	uyari();
	}
	else if(urun_secim==1){
		printf("Sectiginiz urun: 1.Ulker Gofret %.2f TL, (%.2f Ad)\n",urunler[0][0],urunler[0][1]);
	}
	else if(urun_secim==2){
		printf("Sectiginiz urun: 2.Dido %.2f TL, (%.2f Ad)\n",urunler[1][0],urunler[1][1]);
	}
	else if(urun_secim==3){
		printf("Sectiginiz urun: Albeni %.2f KRS, (%.2f Ad)\n",urunler[2][0],urunler[2][1]);
	}
	else if(urun_secim==4){
		printf("Sectiginiz urun: 8 kek %.2f KRS, (%.2f Ad)\n",urunler[3][0],urunler[3][1]);
	}
	else if(urun_secim==5){
		printf("Sectiginiz urun: Popkek %.2f KRS, (%.2f Ad)\n",urunler[4][0],urunler[4][1]);
	}
	else if(urun_secim==6){
		printf("Sectiginiz urun: Eti Browne  %.2f KRS, (%.2f Ad)\n",urunler[5][0],urunler[5][1]);
	}
	else if(urun_secim==7){
		printf("Sectiginiz urun: Ikram %.2f TL, (%.2f Ad)\n",urunler[6][0],urunler[6][1]);
	}
	else if(urun_secim==8){
		printf("Sectiginiz urun: 9 Kat %.2f KRS, (%.2f Ad)\n",urunler[7][0],urunler[7][1]);
	}
	else if(urun_secim==9){
		printf("Sectiginiz urun: Cizi %.2f KRS, (%.2f Ad)\n",urunler[8][0],urunler[8][1]);
	}
	else if(urun_secim==10){
		printf("Sectiginiz urun: Su %.2f KRS, (%.2f Ad)\n",urunler[9][0],urunler[9][1]);
	}
	else if(urun_secim==11){
		printf("Sectiginiz urun: Ice Tea %.2f KRS, (%.2f Ad)\n",urunler[10][0],urunler[10][1]);
	}
	else if(urun_secim==12){
		printf("Sectiginiz urun: Kola %.2f TL, (%.2f Ad)\n",urunler[11][0],urunler[11][1]);
	}
	else if(urun_secim==13){
		printf("Sectiginiz urun: Fanta %.2f TL, (%.2f Ad)\n",urunler[12][0],urunler[12][1]);
	}
	else if(urun_secim==14){
		printf("Sectiginiz urun: Soda %.2f KRS, (%.2f Ad)\n",urunler[13][0],urunler[13][1]);
	}
	else if(urun_secim==15){
		printf("Sectiginiz urun: Sut %.2f KRS, (%.2f Ad)\n",urunler[14][0],urunler[14][1]);
	}	
}

	void fiyat_gunc(float urunler[14][2]){
	printf("Lutfen seciminizi giriniz: ");
    scanf("%d",&urun_secim);
	if(urun_secim==1){
		printf("Urun fiyati: 1.Ulker Gofret %.2f TL\n",urunler[0][0]);
		printf("Guncel fiyati girin:");
		scanf("%d",&urunler[0][0]);
	}
	else if(urun_secim==2){
		printf("Guncel fiyat: 2.Dido %.2f TL\n",urunler[1][0]);
		printf("Guncel fiyati girin:");
		scanf("%d",&urunler[0][0]);
	}
	else if(urun_secim==3){
		printf("Guncel fiyat: Albeni %.2f TL\n",urunler[2][0]);
		printf("Guncel fiyati girin:");
		scanf("%d",&urunler[0][0]);
	}	

}

	int admin_menu(){
		int cek,al,sec;
		printf("1. Para Cek\n");
		printf("2. Fiyat Guncelleme\n");
		printf("3. Cikis\n");
		scanf("%d",&sec);
	
			switch(sec){
				case 1:{
					printf("Cekilecek tutari giriniz");
					scanf("%d",&cek);
					if(cek>0){
					if(cek>=kasa)
					printf("Kasadan yuksek tutar cekemezsiniz");
					else{
						ckasa=kasa-cek;
						kasa=ckasa;
						printf("%d TL cekilmistir\n",cek);
						}
					}else
					printf("Yanlis giris. Tekrar giriniz");
					break;}
				
				case 2:{
					guncel();
					break;		
				}
				case 3:{
					printf("Cikis yapiliyor.\n");
				 menu();
					break;
				}	
				default: printf("Hatali secim yaptiniz. Panelden cikiliyor!");
				getch();
				system("cls");
				menu();
				break;
			}	
	}
		
	void ariza_mesaj(){
		
			
	}

	void para_giris(){
	printf("Yalnizca 0.5krs, 0.10krs , 0.25krs, 0.50krs, 1 TL girisi yapiniz:");
	scanf("%f",&para);
	if(para==000){
		admin_menu();
	}
	
	else if(para>1){
		printf("Hatali para girisi yaptiniz.");
		
	}
	else {
			urun_secme();
	}

}
	void para_iade(){
	float para_iadesi=para_giris-urun_secme;
		if(para_giris>urun_secme){
		printf("Para iadeniz: %f ",para_iadesi);	
		}

		else {
			printf("Iyi gunler dileriz.");
		}
	

}

	void uyari(){
			printf("Yetersiz bakiye!\n");
			printf("Farkli bir urun seciniz\n");
			urun_secme();
}
	int admin(int secim){
		int id_no,sifre;	
		baslangic:
				system("cls");
		printf("Admin idsini giriniz : ");
		scanf("%d",&id_no);
		printf("Sifreyi giriniz :");
		scanf("%d",&sifre);
		if(id_no==1234 && sifre==1903){
		admin_menu();}
		else
		printf("Yanlis id ve sifre girdiniz tekrar deneyiniz!");
		getch();
		goto baslangic;

}


int main() {
	int secim;
	hosgeldiniz();
	menu();
	para_giris();
	
		
	return 0;
}
