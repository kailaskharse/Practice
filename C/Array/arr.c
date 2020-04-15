#include<stdio.h>

#define Max 3

int main(){
	int arr[Max][Max];
	int i,j,num=1;
	for(i=0; i<Max; i++){
		for(j=0; j<Max; j++){
			arr[i][j] = num++;
		}
	}
	
	printf("Elements are \n:");	
	for(i=0; i<Max; i++){
		for(j=0; j<Max; j++){
			printf("%d ",arr[Max][Max]);
		}printf("\n");
	}
	return 0;
}	
