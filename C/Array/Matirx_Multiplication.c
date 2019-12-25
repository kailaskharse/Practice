#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2

int main(){
	int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
	int i,j,k;
	printf("Enter Martix: Mat1[%d][%d] row wise:\n",ROW1, COL1);
	for(i=0; i<ROW1; i++){
		for(j=0; j<COL1; j++){
			scanf(" %d ", &mat1[ROW1][COL1] );
		}
	}
	for(i=0; i<ROW1; i++){
		for(j=0; j<COL1; j++){
			printf("%5d", mat1[i][j]);
		}
		printf("\n");
	}
	printf("Enter Martix: Mat2[%d][%d] row wise:\n",ROW2, COL2);
	for(i=0; i<ROW2; i++){
		for(j=0; j<COL2; j++){
			scanf(" %d ", &mat2[ROW1][COL1] );
		}
	}

	for(i=0; i<ROW2; i++){
		for(j=0; j<COL2; j++){
			printf("%5d ", mat2[i][j]);
		}
		printf("\n");
	}
// Multiplication

	for(i=0; i<ROW1; i++){
		for(j=0; j<COL2; j++){
			mat3[i][j]=0;
			for(k=0; k<COL1; k++){
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	printf("The Resultant Matrix mat3[%d][%d] is: \n", ROW1, COL2);
	for(i=0; i<ROW1; i++){
		for(j=0; j<COL2; j++)
			printf("%5d ", mat3[i][j]);
		printf("\n");
	}
	return 0;
}
