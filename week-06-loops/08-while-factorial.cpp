#include<stdio.h>

// kullanıcının girdiği sayının faktöriyelini bulup yazdıran c kodunu yazınız.

int main(){
    int sayi;
    int carpim=1; 
    int i=1; // başlangıç değeri
    printf("Faktoriyeli hesaplanacak sayiyi giriniz:\n");
    scanf("%d",&sayi);

    while(i<=sayi) //koşul
    {  
        carpim *=i;
        i++; // her seferde değeri +1 arttırıyoruz
    }
    printf("%d!=%d",sayi, carpim);

    return 0;
}