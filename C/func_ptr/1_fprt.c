#include<stdio.h>
void myfunc(int x){
	printf("value of x=%d\n",x);
}
void (*fptr)(int);

int main(){
	fptr=myfunc;
	myfunc(2);
	fptr(3);
	(*fptr)(4);
	return 0;
}
