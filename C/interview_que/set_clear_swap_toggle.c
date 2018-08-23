#include<stdio.h>
#include<stdbool.h>

#define set_bit(num, pos) (num | (1<<pos))
#define clear_bit(num, pos) (num & ~(1<<pos))
#define toggle_bit(num, pos) (num ^ (1<<pos))
#define check_bit(num,  pos) (num & (1<<pos))


int main(){
	int num,pos;
	printf (" Enter the number and position:");
	scanf("%d %d",&num,&pos);
	printf("After Setting the bit Num=%d\n",set_bit(num,pos));
	printf("After Clearing the bit Num=%d\n",clear_bit(num,pos));
	printf("After Toggeling the bit Num=%d\n",toggle_bit(num,pos));
	bool res=check_bit(num,pos);
	printf("After Check the status of bit Num=%d\n",res);
	return 0;
}
	
