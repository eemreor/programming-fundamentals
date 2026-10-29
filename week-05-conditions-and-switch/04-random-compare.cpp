#include<stdio.h>
#include<stdlib.h> //rand() : rastgele sayı üretir.                        örnek7yi kendin yap!!!!
#include<time.h>  //srand(time(NULL))

int main (){
	
	int sayi1,sayi2;
	srand(time(NULL)); //her seferinde fsrklı değerler getiriyor.
	sayi1=rand()%100;
	sayi2=rand()%100;
	
	printf("Birinci sayi:%d\nIkinci sayi:%d\n",sayi1,sayi2);
	if(sayi1<sayi2){
		printf("%d degeri %d degerinden kucuktur.\n",sayi1,sayi2);
	}
	else if (sayi1>sayi2){
			printf("%d degeri %d degerinden buyuktur.\n",sayi1,sayi2);
	}
	else{
			printf("iki deger birbirine esittir.\n",sayi1,sayi2);
	}
	return 0;
}
