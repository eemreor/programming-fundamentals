/*
----- Matematiksel Islemler Menusu -----
1. Kare alma (Bir sayının karesi)
2. Kare kök alma
3. Üs alma (Bir sayının bir üssü)
4. Mutlak değer alma
*/

#include<stdio.h>
#include<math.h> //sqrt() karekök alma pow() kuvvet alma
int main(){
	double sayi,us,sonuc;
	char secim;
	printf("----- Matematiksel Islemler Menusu -----\n");
	printf("1. Kare alma (Bir sayinin karesi)\n");
	printf("2. Kare kök alma\n");
	printf("3. Üs alma (Bir sayinin bir üssü)\n");
	printf("4. Mutlak deger alma\n");
	
	printf("Secimizini giriniz(1-4):");
	scanf("%d",&secim);
	
	
	switch(secim){
		case 1:
			printf("Sayi giriniz:");
			scanf("%lf",&sayi);
			sonuc=pow(sayi,2);
			printf("sonuc:%.2lf",sonuc);
		break;
		
		case 2:
			printf("Sayi giriniz:");
			scanf("%lf",&sayi);
			if(sayi<0){
				printf("negatif sayinin karekoku tanimsizdir.");
			}
			else {
				sonuc=sqrt(sayi);
				printf("sonuc:%.2lf",sonuc);
			}
		break;
		
		case 3:
			printf("Taban Sayisi giriniz:");
			scanf("%lf",&sayi);
			printf("us degeri giriniz:");
			scanf("%lf",&us);
			sonuc=pow(sayi,us);
			printf("sonuc:%.2lf",sonuc);
		break;
		
		case 4:
			printf("Sayi giriniz:");
			scanf("%lf",&sayi);
			sonuc=fabs(sayi); //fabs fonksiyonu sayının mutlak değerini alır
			printf("sonuc:%.2lf",sonuc);
	
		break;
		
		default: //iki nokta case ve defaultta dikkat et hata yaptın
		printf("gecersiz secim girdiniz");
		break;
	}
	
	

	return 0;
}
