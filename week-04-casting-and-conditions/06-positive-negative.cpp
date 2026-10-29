#include<stdio.h>

int main (){
	//Girilen sayının pozitif negatif ya da 0 oldupunu bulan programın kodlarını c dili ile yazınız
	int sayi; 
	printf("Bir sayi giriniz:");
	scanf("%d", &sayi);
	if(sayi>0){
		printf("Girilen sayi pozitiftir.");
	}
	else if(sayi<0){
		printf("Girilen sayi negatiftir.");
	}
	else{
		printf("Girilen Sayi Sifirdir.");
	}
	
	
	
	return 0;
}
