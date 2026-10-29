#include<stdio.h>
// 20 ile 90 arasındaki sayıları (20-22-24...-90) şeklinde while döngüsü kullanarak ekrana yazdıran program
int main(){

    int i=20; // başlangıç değeri

    while(i<=90){  //koşul

        printf("%d\n",i);
        i+=2; // her seferde değeri +2 arttırıyoruz

    }

    printf("Dongu sonu\n");

    return 0;
}