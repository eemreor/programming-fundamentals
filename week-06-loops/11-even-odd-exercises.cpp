#include<stdio.h>
//soru 1: 41 ile 131 arasındaki çift sayıları do..while ve while döngüsü kullanarak ekrana yazdıran program
//soru 2: 11 ile 101 arasındaki çift sayıların toplamını ekrana yazdırınız.
//soru 3: 10 ile 100 arasındaki tek sayıları ekrana yazdırınız
//soru 4: 10 ile 100 arasındaki tek sayıların toplamını ekrana yazdırınız
int main(){
    //SORU 1

    int i = 42; // başlangıç değeri

    while(i<=130){  //koşul

        printf("%d\n",i);
        i+=2; // her seferde değeri +2 arttırıyoruz
       
    }

    printf("Dongu sonu\n");

    i = 42; // while dongusu i'yi 132'ye cikardi, do..while icin bastan basliyoruz

    do{  //koşul
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
        i++; // her seferde değeri +1 arttırıyoruz
       
    }while(i<=130);

    printf("Dongu sonu\n");

    //SORU 2

    int toplam=0; 
    int ii = 12; // başlangıç değeri

    while(ii<=100) //koşul
    {  
        toplam +=ii;
        printf("sayac: %d, sonuc: %d\n",ii,toplam);
        ii+=2; // her seferde değeri +1 arttırıyoruz
    }
    printf("11 ile 101 arasindaki cift sayilarin toplami: %d\n", toplam);

    //SORU 3 

    int iii = 11; // başlangıç değeri

    while(iii<=99){  //koşul

        printf("%d\n",iii);
        iii+=2; // her seferde değeri +2 arttırıyoruz
       
    }

    printf("Dongu sonu\n");

    //SORU 4

    int toplamm=0; 
    int iiii = 11; // başlangıç değeri

    while(iiii<=99) //koşul
    {  
        toplamm +=iiii;
        printf("sayac: %d, sonuc: %d\n",iiii,toplamm);
        iiii+=2; // her seferde değeri +1 arttırıyoruz
    }
    printf("10 ile 100 arasindaki tek sayilarin toplami: %d", toplamm);

    return 0;
}