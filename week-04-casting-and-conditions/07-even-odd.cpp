#include<stdio.h>

int main (){
	//Girilen sayının çift tek oldupunu bulan programın kodlarını c dili ile yazınız
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
