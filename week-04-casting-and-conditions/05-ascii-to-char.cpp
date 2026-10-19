#include<stdio.h>

int main(){
	char ch;
	int ascil_value=65;
	//zorunlu dönüşüm:int--->char
	
	ch=(char)ascil_value;
	printf("65 sayisinin karakter karsiligi:%c\n",ch);
	
	return 0;
}
