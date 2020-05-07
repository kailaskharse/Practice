#include<stdio.h>
#include<stdlib.h>
void myfunc(int x ){
	printf("value =%d \n",x);
}

//void (*world)(int);

int main(){
	void (*hello)(int);	//Funcion pointer decleration
	void (*world)(int);

	hello=&myfunc;		//funcion pointer initilizaion
	world=myfunc;

	hello(2);
#if 1
	world(3);
	(*hello)(20);
	(*world)(21);
	myfunc(30);
#endif
	return 0;
}
