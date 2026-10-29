#include<stdio.h>

// 1 ile 10 arasındaki sayıların çarpımını bulup yazdıran c kodunu yazınız.

int main(){
    int carpim=1; 
    int i;

    for(i=1;i<=10;i++) 
    {  
        carpim *=i;
    }
    printf("1 ile 10 arasindaki sayilarin carpimi: %d", carpim);

    return 0;
}