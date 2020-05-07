#include<stdio.h>

int swap_nibble(int);
int swap_two_bits(int);
int main(){
	int num=0x0;
	printf("enter the Hex Number:");
	scanf("%d",&num);
	printf("Enterd Hex=%x, Equivalent Decimal=%d\n",num,num);
	int result=swap_nibble(num);
	printf("After Swapping:%x, Equivalent dec=%d\n", result, result);
	printf("swaping every 2 bit\n");
	//Swaping 2 bits in 8 bit
	result=swap_two_bits(num);
	printf("After Swapping 2bits HEX:%x, Equivalent DEC=%d\n", result, result);
	return 0;
}	
// FUNCTION TO SWAP THE NIBBLE
int swap_nibble(int num){
	return( (num & 0x0F)<<4 | (num & 0xF0)>>4);
}

/*
FUNCTION TO SWAP 2 BITS IN 8 BIT BINARY NUMBER
*/
int swap_two_bits(int num){
	return( (num & 0x55)<<1 | (num & 0xAA) >>1);
}

