#include<stdio.h>

void mystartupfunction(void) __attribute__ ((constructor));

void mycleanupfunction(void) __attribute__ ((destructor));

void mystartupfunction(){
	printf("startup code before main()\n");
}

void mycleanupfunction(){
	printf("cleanup code after main()\n");
}

int main(){

	printf("Hello\n");
	return 0;
}
