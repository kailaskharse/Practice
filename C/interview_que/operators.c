#include<stdio.h>
int main(){
	static int a=5,b=10,c=15;
	int w=40,x=50,y=60,sum=0;
	printf("in logical AND operation first condition is \
		\bFALSE then second condition is not checked\n");
	if(a>b && c++){
		a=++a;
		b=++b;
		printf("In if condition :a=%d, b=%d, c=%d\n ",a,b,c);
	}
	else{
		printf("in else : a=%d, b=%d, c=%d\n ",a,b,c);
	}
	printf("Logical OR operation if first condition is TRUE then \
		second condition is not checked\n");
	if(w<x || sum++){
		w=++w;	x=++x; y=++y; 
	}
	else{
		printf("in else: w=%d, x=%d, y=%d, sum=%d\n",w,x,y,sum);
	}
		printf("out of OR loop: w=%d, x=%d, y=%d, sum=%d\n",w,x,y,sum);
}
