#include<stdio.h>
// 50 ile 100 arasındaki sayıları while döngüsü kullanarak 
// ekrana yazdıran program
int main(){

    int i=50; // başlangıç değeri

    while(i<=100){  //koşul

        printf("%d\n",i);
        i++; // her seferde değeri +1 arttırıyoruz

    }

    printf("Dongu sonu\n");

    return 0;
}