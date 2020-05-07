#include<stdio.h>
#include<stdbool.h>

//#define check_bit(num,pos) (num & (1<<pos))

bool ismulof9(int num){
	if(num==0 || num ==9)
		return true;
	if(num < 9)
		return false;

	return ismulof9((num>>3) - (num&7));
}


int main(){
	int num,i;
	printf("enter the Number:");
	scanf("%d",&num);
	if(ismulof9(num))
		printf("Enter Number is multiple of 9\n");
	else
		printf("Entered number is not multiple of 9\n");
	return 0;
}
		
