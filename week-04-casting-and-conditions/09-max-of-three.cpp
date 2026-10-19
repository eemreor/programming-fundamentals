#include<stdio.h>5

int main (){
	
	int x,y,z;
	printf("3 sayi giriniz:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y && x>z){
		printf("buyuk sayi 1.sayidir=%d",x);
	}
	else if (y>x && y>z){
		printf("buyuk sayi 2.sayidir=%d",y);
	}
	else {
		printf("buyuk sayi 3.sayidir=%d",z);
	}
	
	
	return 0;
}
