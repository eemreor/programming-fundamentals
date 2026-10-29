#include<stdio.h>
// 30 ile 120 arasındaki sayıları (30-33-36...-120) şeklinde while döngüsü kullanarak ekrana yazdıran program
int main(){

    int i=30; // başlangıç değeri

    while(i<=120){  //koşul

        printf("%d-",i);
        i+=3; // her seferde değeri +3 arttırıyoruz

    }

    printf("\nDongu sonu\n");

    return 0;
}