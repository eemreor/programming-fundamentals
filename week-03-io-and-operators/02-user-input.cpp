#include<stdio.h>

int main (){
	int sayi; //Tam sayı türünde değişken
	float ondalik; //Ondalık sayı türünde değişken
	char karakter; //karakter türünde değişken
	double Sayi; 
	
	//Kullanıcıdan değer alma 
	printf("Bir sayı giriniz:");
	scanf("%d",&sayi);
	printf("Ondalikli bir sayı:");
	scanf("%f",&ondalik);
	printf("Bir karakter giriniz:");          //*Çalışmadı araştır düzelt. bi şekilde çalıştı ama çözümüne daha bak net değil. 
	scanf(" %c",&karakter);
	printf("Bir double giriniz:");
	scanf("%lf",&Sayi);
	
	//Değişkenlere değer ataması
	//sayi=100;
	//ondalik=3.74658764;
	//karakter='A';
	//Sayi=374375487.155145;
	
	//değişkenleri ekrana yazdırma
	printf("Tam sayi:%d\n",sayi);
	printf("Ondalikli Sayi:%f\n",ondalik); //  %.2f yazarsan virgül sonrası sadece 2 basamak yazar
	printf("Karakter:%c\n",karakter);
	printf("Double sayi:%lf\n",Sayi);
	
	
	return 0;
}
