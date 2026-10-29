#include<stdio.h>
// kullanıcıdan başlangıç ve bitiş değerleri alınarak onlar arasındaki sayıları 
// alt alta yazdıran sayıları for döngüsü kullanarak ekrana yazdıran program
int main(){
    int baslangic,bitis;
    printf("Sirasiyla baslangic ve bitis degerleri giriniz:\n");
    scanf("%d %d",&baslangic,&bitis);
    int i;

    for(i=baslangic;i<=bitis;i++){ 

        printf("%d\n",i);

    }

    printf("Dongu sonu\n");

    return 0;
}