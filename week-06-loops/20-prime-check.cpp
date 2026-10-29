#include<stdio.h>

// girilen sayının asal olup olmadığını bulan programı c diliyle yazınız.

int main(){
    int i;
    int sayi;
    int asal_mi=1; //başlangıçta asal kabul ediyoruz.
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    if(sayi<2){
        printf("Sayi asal degildir.");
        return 0; // 0 ve 1 asal degil, programi burada bitiriyoruz
    }

    for(i=2;i<sayi;i++) 
    {  
        if(sayi%i==0){
        asal_mi=0; // asal değil
        break;
        }
    }
    
    if(asal_mi==0){
        printf("%d sayisi asal degildir.",sayi);
    }
    else{
        printf("%d sayisi asaldir.",sayi);
    }

    return 0;
}