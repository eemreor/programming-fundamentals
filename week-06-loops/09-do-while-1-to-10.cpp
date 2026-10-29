#include<stdio.h>

//1den 10a kadar sayıları do....while döngüsü ile yazınız.

int main(){

    int i=1; // başlangıç değeri

    do
    {  
        printf("%d\n",i);
        i++; // her seferde değeri +1 arttırıyoruz
    }while(i<=10); //koşul

    printf("Dongu sonu\n");

    return 0;
}