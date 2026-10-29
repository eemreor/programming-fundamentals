#include<stdio.h>
#include<math.h>
int main (){
	
	// soru slayt 16
	
	float a,b,c,delta,x1,x2;
	float reelKisim,sanalKisim;
	printf("Sirasi ile a,b ve c katsayilarini giriniz:");
	scanf("%f%f%f",&a,&b,&c);
	//ikinci dereceden denklem kontrolü
		if(a==0){
			if(b!=0){
				printf("Bu birinci dereceden bir denklemdir.");
				printf("Kok:x=%.2f\n",-c/b);
			}
			else{
				printf("Gecersiz denklem.");
			}
			return 0;
		}
		//diskiriminant hesabı
	delta=(b*b)-(4*a*c);
	printf("Delta:%.2f\n",delta);
	if(delta>0){
		//iki farklı gerçek kök 
		x1=(-b + sqrt(delta)) / (2*a);
		x2=(-b - sqrt(delta)) / (2*a);
		printf("iki farkli gercek kok vardir\n");
		printf("x1=%.2f\n",x1);
		printf("x2=%.2f\n",x2);
	}
	else if(delta=0){
		//çakışık tek kök var.
		x1=(-b)/(2*a);
		printf("Cakisik gerçek kok vardir.");
		printf("x1=x2=%.2f\n",x1);
	}
	else{
		//karmaşık kökler(delta<0
		reelKisim=(-b)/(2*a);
		sanalKisim=sqrt(-delta)/(2*a);
		//negatif a durumunda işaret düzeltmesi
		if(sanalKisim<0){
			sanalKisim=-sanalKisim;
		}
		printf("Gercek kok yoktur, karmasik sayili iki kok vardir.\n");
		printf("x1=%.2f+%.2fi\n",reelKisim,sanalKisim);
		printf("x2=%.2f-%.2fi\n",reelKisim,sanalKisim);
	}
	return 0;
}
