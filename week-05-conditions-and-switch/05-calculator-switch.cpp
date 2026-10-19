//SWITCH CASE kullanarak dört iþlem (+,-,*, /) yapan hesap makinesinin kodlarýný C programlama dili ile yazýnýz.

#include<stdio.h>
int main(){
	double sayi1,sayi2;
	char islem;
	printf("Birinci sayiyi giriniz:");
	scanf("%lf",&sayi1);
	
	printf("Yapmak istediginiz islemi giriniz:(+ - * /)");
	//%c önündeki boþluk enter karakterini temizler boþluk olmadýðýnda program çalýþmýyor. dikkatt
	scanf(" %c",&islem);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%lf",&sayi2);
	switch(islem){
		case '+':
			printf("Sonuc:%.2lf\n",sayi1+sayi2);
		break;
		
		case '-':
			printf("Sonuc:%.2lf\n",sayi1-sayi2);
		break;
		
		case '*':
			printf("Sonuc:%.2lf\n",sayi1*sayi2);
		break;
		
		case '/':
		if(sayi2!=0){
		printf("Sonuc:%.2lf\n",sayi1/sayi2);
		}
		else {
		printf("Hata: Sifira bolme tanimsizdir.\n");
		}
		break;
		
		default: //iki nokta case ve defaultta dikkat et hata yaptýn
		printf("gecersiz bir islem op girdiniz");
		break;
	}
	
	

	return 0;
}
