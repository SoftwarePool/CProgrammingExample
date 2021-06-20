#include <stdio.h>
#define SIZE 10000
 
int myArray[SIZE - 1];
 
//Esas fonksiyonumuz buras� parametre olarak dizi al�yor.
void insertionSort(int x[])
{
    //d�� d�ng�m�z ve i�teki while d�ng�m�z i�in de�i�kenler
    int i, j;
    //Anahtar indisimiz i�in de�i�ken
    int key;
 
    //Sitemizdeki �rnekte anlatt���m�z gibi 1. indisten ba�l�yor d�ng�m�z
    for(i = 1; i < SIZE; i++) { //indisteki say�m�z anahtar de�erimiz oluyor. key = myArray[i]; //Anahtar de�erimizin bir solundaki say�y�n�n indisine j dedik j = i - 1; //E�er j b�y�k e�ittir s�f�r ve dizi[j] say�m�z anahtar de�erden b�y�kse bu say�lar�n hepsini sa�a kayd�raca��z. while(j >= 0 && myArray[j] > key)
        {
            //Kayd�rma i�ini burada yap�yoruz.
            myArray[j+1] = myArray[j];
 
            //J'nin eksilmesi soldaki say�lar� taramak i�in
            j--;
        }
 
        //Bu sat�r do�ru pozisyona eleman ekleme i�lemini ger�ekle�tiriyor.
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
