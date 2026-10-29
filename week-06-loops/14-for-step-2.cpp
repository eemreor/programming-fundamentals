#include<stdio.h>
// 20 ile 90 arasındaki sayıları (20-22-24...-90) şeklinde for döngüsü kullanarak ekrana yazdıran program
int main(){

    int i;

    for(i=20;i<=90;i+=2){  

        printf("%d-",i);

    }

    printf("\nDongu sonu\n");

    return 0;
}