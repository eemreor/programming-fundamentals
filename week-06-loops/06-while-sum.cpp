#include<stdio.h>

// 1 ile 10 arasındaki sayıların toplamını bulup yazdıran c kodunu yazınız.

int main(){
    int toplam=0; 
    int i=1; // başlangıç değeri

    while(i<=10) //koşul
    {  
        toplam +=i;
        printf("sayac: %d, sonuc: %d\n",i,toplam);
        i++; // her seferde değeri +1 arttırıyoruz
    }
    printf("1 ile 10 arasindaki sayilarin toplami: %d", toplam);

    return 0;
}