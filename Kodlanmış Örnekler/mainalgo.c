#include <stdio.h>
#define SIZE 10000
 
int myArray[SIZE - 1];
 
//Esas fonksiyonumuz burasý parametre olarak dizi alýyor.
void insertionSort(int x[])
{
    //dýþ döngümüz ve içteki while döngümüz için deðiþkenler
    int i, j;
    //Anahtar indisimiz için deðiþken
    int key;
 
    //Sitemizdeki örnekte anlattýðýmýz gibi 1. indisten baþlýyor döngümüz
    for(i = 1; i < SIZE; i++) { //indisteki sayýmýz anahtar deðerimiz oluyor. key = myArray[i]; //Anahtar deðerimizin bir solundaki sayýyýnýn indisine j dedik j = i - 1; //Eðer j büyük eþittir sýfýr ve dizi[j] sayýmýz anahtar deðerden büyükse bu sayýlarýn hepsini saða kaydýracaðýz. while(j >= 0 && myArray[j] > key)
        {
            //Kaydýrma iþini burada yapýyoruz.
            myArray[j+1] = myArray[j];
 
            //J'nin eksilmesi soldaki sayýlarý taramak için
            j--;
        }
 
        //Bu satýr doðru pozisyona eleman ekleme iþlemini gerçekleþtiriyor.
        myArray[j+1] = key;
    }
}
 
void printSorted()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        printf("%d\n", myArray[i]);
    }
}
 
void swapf(int x, int y)
{
    int temp;
    temp = myArray[x];
    myArray[x] = myArray[y];
    myArray[y] = temp;
 
}
 
void init()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        myArray[i] = rand()%10000;
    }
}
 
int main()
{
    init();
    insertionSort(myArray);
    printSorted();
    return 0;
}
