#include<stdio.h>

// 1 ile 10 arasındaki sayıların toplamını bulup yazdıran c kodunu yazınız.

//sınavda kodu verip ekran çıktısı nedir diye soru gelebilir!!!!

int main(){
    int toplam=0; 
    int i;

    for(i=1;i<=10;i++) //koşul
    {  
        toplam +=i;
    }
    printf("1 ile 10 arasindaki sayilarin toplami: %d", toplam);

    return 0;
}