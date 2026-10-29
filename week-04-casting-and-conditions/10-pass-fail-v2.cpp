#include<stdio.h>

int main (){
	
	/*
	
	Bir öğrencinin dersten geçebilmesi için vize ve final notunun 50'e eşit veya daha fazla olması gerekmektedir.
	Vize ve final notu en az 50'den az ise kalmaktadır.
	Vize ve final ortalaması da vize notunun %30 ile final notunun %70i alınarak hesaplanmaktadır.
	Öğrencinin geçip kaldığını ve ortalamasını ekrana yazdıran kodu yazınız.
	
	*/
	
	int vize,final;
	float ortalama;
	
	printf("Vİze ve Final notlarini sirasiyla giriniz:(0 ile 100)");
	scanf("%d%d",&vize,&final);
	
	ortalama=vize*0.3 + final*0.70;
	
	if (vize>=50 && final>=50){
		printf("Gectiniz.\n");
		printf("Ortamala=%f",ortalama);
	}
	else{
		printf("Kaldiniz.\n");
		printf("Ortamala=%f",ortalama);
	}
	
	
	
	return 0;
}
