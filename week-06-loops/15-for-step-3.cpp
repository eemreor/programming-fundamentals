#include<stdio.h>
// 30 ile 120 arasındaki sayıları (30-33-36...-120) şeklinde for döngüsü kullanarak ekrana yazdıran program
int main(){

    int i;

    for(i=30;i<=120;i+=3){  

        printf("%d-",i);

    }

    printf("\nDongu sonu\n");

    return 0;
}