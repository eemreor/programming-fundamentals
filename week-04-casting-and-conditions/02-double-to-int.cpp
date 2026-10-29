#include<stdio.h>

int main(){
	double pi=3.1415;
	int pi_int;
	//Zorunlu dönüşüm: Double--->int
	pi_int=(int)pi;
	
	printf("pi nin tam sayi hali:%d",pi_int);
	
	return 0;
}
