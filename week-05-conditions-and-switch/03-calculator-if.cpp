#include<stdio.h>

// hesap makinesi.

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
	if(islem =='+'){
		printf("Sonuc:%.2lf\n",sayi1+sayi2);
	}
	else if(islem=='-'){
		printf("Sonuc:%.2lf\n",sayi1-sayi2);
	}
		else if(islem=='*'){
		printf("Sonuc:%.2lf\n",sayi1*sayi2);
	}
		else if(islem=='/'){
			if(sayi2!=0){
				printf("Sonuc:%.2lf\n",sayi1/sayi2);
			}
			else {
					printf("Hata: Sifira bolme tanimsizdir.");
			}
	}
	else{
		printf("Gecersiz bir islem op. girdiniz.");
	}
	return 0;
}
