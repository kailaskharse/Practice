#include<stdio.h>
#include<sys/types.h>
main(){
	int a=15;
	if(fork() ==0){
		a=a+5;
		printf("in child: a=%d, &a=%d \n",a, &a);
	}
	else{
		a=a-5;
		printf("In Parent: a=%d, &a=%d \n",a,&a);
	}
}
