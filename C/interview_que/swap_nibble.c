#include<stdio.h>

int swap_nibble(int);

int main(){
	int num=0x0;
	printf("enter the Hex Number:");
	scanf("%d",&num);
	printf("Enterd Hex=%x, Equivalent Decimal=%d\n",num,num);
	int result=swap_nibble(num);
	printf("After Swapping:%x, Equivalent dec=%d\n", result, result);
	return 0;
}	

int swap_nibble(int num){
	return( (num & 0x0F)<<4 | (num & 0xF0)>>4);
}
