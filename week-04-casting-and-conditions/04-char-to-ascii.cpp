#include<stdio.h>

int main(){
	char ch='N';
	int ascil_value;
	//zorunlu dönüşüm:char--->int
	
	ascil_value=(int)ch;
	printf("A karakterinin ASCII degeri:%d\n",ascil_value);
	
	return 0;
}
