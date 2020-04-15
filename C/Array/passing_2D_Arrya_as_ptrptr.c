
#if 1
#include<stdio.h>
#include<stdlib.h>

void assign(int m, int n, int arr[m][n]){

	int i,j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			arr[m][n]=m * n;
		}
	}
}
int main(){
	int a=3;
	int b=4, i=1, j=1;
	int arr[a][b];
	static int count=10;
	assign(a ,b ,arr);
	
	printf("Array Elements are\n");
	for(i=0; i<a; i++){
		for( j=0; j<b; j++){
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
}	
#endif

#if 0
#include <stdio.h>

// Here the parameter is a static 2D array
void assign(int m, int n, int arr[m][n])
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = i + j;
		}
	}
}

// Program to pass 2D array to a function in C
int main(void)
{
	int m = 5;
	int n = 5;

	int arr[m][n];

	assign(m, n, arr);

	// print 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
#endif
