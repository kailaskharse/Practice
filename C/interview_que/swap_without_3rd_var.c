#include<stdio.h>

void swap_using_add_sub(int,int);
void swap_using_EOXR(int,int);
void swap_using_mul_div(int,int);

int main(){
	int i=10, j=20;
	printf("Before swapping i=%d, j=%d\n",i,j);
	swap_using_add_sub(i,j);
	printf("Before swapping i=%d, j=%d\n",i,j);
	swap_using_EOXR(i,j);
	printf("Before swapping i=%d, j=%d\n",i,j);
	swap_using_mul_div(i,j);
	return 0;
}
void swap_using_add_sub(int x,int y){
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping using Add_Sub: i=%d, j=%d\n",x,y);

}
void swap_using_EOXR(int x ,int y){
	x=x^y;
	y=x^y;
	x=x^y;
	printf("After swapping using EXOR: i=%d, j=%d\n",x,y);

}
void swap_using_mul_div(int x,int y){
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping using MUL_DIV: i=%d, j=%d\n",x,y);

}
