#include<stdio.h>

int main (){
	int sayi; //Tam sayý türünde deðiþken
	float ondalik; //Ondalýk sayý türünde deðiþken
	char karakter; //karakter türünde deðiþken
	double Sayi; 
	
	//Kullanýcýdan deðer alma 
	printf("Bir sayý giriniz:");
	scanf("%d",&sayi);
	printf("Ondalikli bir sayý:");
	scanf("%f",&ondalik);
	printf("Bir karakter giriniz:");          //*Çalýþmadý araþtýr düzelt. bi þekilde çalýþtý ama çözümüne daha bak net deðil. 
	scanf(" %c",&karakter);
	printf("Bir double giriniz:");
	scanf("%lf",&Sayi);
	
	//Deðiþkenlere deðer atamasý
	//sayi=100;
	//ondalik=3.74658764;
	//karakter='A';
	//Sayi=374375487.155145;
	
	//deðiþkenleri ekrana yazdýrma
	printf("Tam sayi:%d\n",sayi);
	printf("Ondalikli Sayi:%f\n",ondalik); //  %.2f yazarsan virgül sonrasý sadece 2 basamak yazar
	printf("Karakter:%c\n",karakter);
	printf("Double sayi:%lf\n",Sayi);
	
	
	return 0;
}
