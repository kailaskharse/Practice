#include<stdio.h>
#include<stdio.h>
/*
#define getName(var) #var

int main(){
	int myVar;
	printf("%s",getName(myVar));
	return 0;
}
*/

#define getName(var, str) sprintf(str,"%s", #var)

int main(){
	int myVar;
	char str[20];
	getName(myVar, str);
	printf("%s",str);
	return 0;
}
