#include<stdio.h>
// 50 ile 100 arasındaki sayıları do....while döngüsü kullanarak 
// ekrana yazdıran program
int main(){

    int i=50; // başlangıç değeri

    do
    {  

        printf("%d\n",i);
        i++; // her seferde değeri +1 arttırıyoruz

    }while(i<=100);//koşul

    printf("Dongu sonu\n");

    return 0;
}