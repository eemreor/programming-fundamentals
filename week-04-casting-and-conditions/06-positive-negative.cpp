#include<stdio.h>

int main (){
	//Girilen sayýnýn pozitif negatif ya da 0 oldupunu bulan programýn kodlarýný c dili ile yazýnýz
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
