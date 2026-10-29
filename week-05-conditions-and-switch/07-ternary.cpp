// slayt son örnekler sf 22

#include<stdio.h>
int main (){
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	//ternary operator kullanarak (?)
	
	(sayi>=0) ? printf("sayi pozitiftir.\n") : printf("sayi negatiftir.\n");
	
	//tek çift kontrolu
	(sayi%2==0) ? printf("sayi cifttir.\n") : printf("sayi tektir.\n");
	
	//geçti kaldı
	(sayi>50) ? printf("sayi geçti.\n") : printf("sayi kaldi.\n");
	
	return 0;
}
