#include<stdio.h>

int main (){
	
	/*
	
	Bir öðrencinin dersten geçebilmesi için vize ve final notunun 50'e eþit veya daha fazla olmasý gerekmektedir.
	Vize ve final notu en az 50'den az ise kalmaktadýr.
	Vize ve final ortalamasý da vize notunun %30 ile final notunun %70i alýnarak hesaplanmaktadýr.
	Öðrencinin geçip kaldýðýný ve ortalamasýný ekrana yazdýran kodu yazýnýz.
	
	*/
	
	int vize,final;
	float ortalama;
	
	printf("VÝze ve Final notlarini sirasiyla giriniz:(0 ile 100)");
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
