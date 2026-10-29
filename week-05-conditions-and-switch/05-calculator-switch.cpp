//SWITCH CASE kullanarak dört işlem (+,-,*, /) yapan hesap makinesinin kodlarını C programlama dili ile yazınız.

#include<stdio.h>
int main(){
	double sayi1,sayi2;
	char islem;
	printf("Birinci sayiyi giriniz:");
	scanf("%lf",&sayi1);
	
	printf("Yapmak istediginiz islemi giriniz:(+ - * /)");
	//%c önündeki boşluk enter karakterini temizler boşluk olmadığında program çalışmıyor. dikkatt
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
		
		default: //iki nokta case ve defaultta dikkat et hata yaptın
		printf("gecersiz bir islem op girdiniz");
		break;
	}
	
	

	return 0;
}
