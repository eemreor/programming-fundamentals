#include<stdio.h>

int main(){
	int r;
	const float pi=3.1415;
	float alan,cevre;
	printf("Lutfen bir yaricap degeri gir:");
	scanf("%d",&r);
	alan=pi*r*r;
	cevre=2*pi*r;
	 printf("Dairenin alani=%.2f\n",alan);
	 printf("Dairenin cevresi=%.3f",cevre);
	
	
	
	return 0;
}
