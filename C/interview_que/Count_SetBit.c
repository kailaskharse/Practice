#include<stdio.h>

int count_set_bit(int);
int main(){
	int number;
	printf("Enter the Number:");
	scanf("%d",&number);
	printf("Total SET bits in Number %d = %d\n",number,count_set_bit(number));
}

int count_set_bit(int number){
	int i,count=0;
/*	for(i=0; i<=31; i++){
		if(number&(1<<i))
			count++;
	}
*/
	while(number){
		count+=number&1;
		number>>=1;
	}
	return count;
}
