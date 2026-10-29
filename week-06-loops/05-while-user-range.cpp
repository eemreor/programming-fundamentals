#include<stdio.h>
// kullanıcıdan başlangıç ve bitiş değerleri alınarak onlar arasındaki sayıları 
// alt alta yazdıran sayıları while döngüsü kullanarak ekrana yazdıran program
int main(){
    int baslangic,bitis;
    printf("Sirasiyla baslangic ve bitis degerleri giriniz:\n");
    scanf("%d,%d",&baslangic,&bitis);
    int i=baslangic; // başlangıç değeri

    while(i<=bitis){  //koşul

        printf("%d\n",i);
        i+=1; // her seferde değeri +1 arttırıyoruz

    }

    printf("Dongu sonu\n");

    return 0;
}