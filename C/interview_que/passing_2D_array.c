#include<stdio.h>

void my2darray(int * arr[]);

int main(){
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("in main\n");
	my2darray((int **)arr);
	return 0;
}

void my2darray(int * arr[]){
	int m=3,n=3,i,j;
	printf("in function\n");
	for(i=0;i<m;i++){	
		for(j=0;j<n;j++)
			printf("%d ", *((arr+i)+j));
		printf("\n");
	}
}
