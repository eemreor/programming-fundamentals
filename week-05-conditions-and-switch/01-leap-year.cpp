#include<stdio.h>

    // soru slayt 7

int main (){
	int year;
	printf("Yil giriniz:");
	scanf("%d", &year);
	
	if(((year%4==0) and (year %100 !=0)) or (year%400==0)){
		printf("%d Artik Yildir.",year);
	}
	else {
			printf("%d Artik Yil Degildir.",year);
	}
	
	
	return 0;
}
