#include<stdio.h>

int main (){
	
	int vize,final;
	float ortalama;
	
	printf("Vize ve Final notlarini sirasiyla giriniz:(0 ile 100)");
	scanf("%d%d",&vize,&final);
	
	ortalama=vize*0.3 + final*0.70;
	
	if (final>=50 && ortalama>=60){
		printf("Gectiniz.\n");
		printf("Ortamala=%f",ortalama);
	}
	else{
		printf("Kaldiniz.\n");
		printf("Ortamala=%f",ortalama);
	}
	
	
	
	return 0;
}
