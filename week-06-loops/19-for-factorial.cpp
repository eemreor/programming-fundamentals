#include<stdio.h>

// kullanıcının girdiği sayının faktöriyelini bulup yazdıran c kodunu yazınız.

int main(){
    int sayi;
    int carpim=1; 
    int i;
    printf("Faktoriyeli hesaplanacak sayiyi giriniz:\n");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++) //koşul
    {  
        carpim *=i;
    }
    printf("%d!=%d",sayi, carpim);

    return 0;
}