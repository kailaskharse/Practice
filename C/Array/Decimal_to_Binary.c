#include<stdio.h>
int main(){
	int num, arr[15],i,j;
	printf("\tEnter a Decimal Number: ");
	scanf("%d",&num);
	i=0;
	while(num>0){
		arr[i]=num%2;		//Store the reminder in array
		num/=2;
		i++;
	}
	printf("\t\tBinary Number is : ");
	for(j=i-1; j>=0; j--){
		printf("%d",arr[j]);
	}
	printf("\n\n");
	return 0;
}
		

