#include<stdio.h>

// 1 ile 10 arasındaki sayıların çarpımını bulup yazdıran c kodunu yazınız.

int main(){
    int carpim=1; 
    int i=1; // başlangıç değeri

    while(i<=10) //koşul
    {  
        carpim *=i;
        printf("sayac: %d, sonuc: %d\n",i,carpim);
        i++; // her seferde değeri +1 arttırıyoruz
    }
    printf("1 ile 10 arasindaki sayilarin carpimi: %d", carpim);

    return 0;
}