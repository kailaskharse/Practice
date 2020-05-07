#include<stdio.h>
int add(int,int);
int main(int argc, char*argv[]){
	int a=4;
	printf("\nAdd=%d\n",add(a,++a));
	return 0;
}

int add(int a, int b){
	return a*b;
}
