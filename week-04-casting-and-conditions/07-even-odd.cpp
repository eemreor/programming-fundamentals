#include<stdio.h>

int main (){
	//Girilen sayýnýn çift tek oldupunu bulan programýn kodlarýný c dili ile yazýnýz
	int sayi; 
	printf("Bir sayi giriniz:");
	scanf("%d", &sayi);
	if(sayi%2==0){
		printf("Girilen sayi cifttir.");
	}
	else{
		printf("Girilen sayi tektir.");
	}
	
	
	
	return 0;
}
