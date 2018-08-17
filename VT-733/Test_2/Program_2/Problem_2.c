#include<stdio.h>
#include<stdlib.h>


int main(){
	int **p,i,j,k,r1,c1,r2,c2,sum=0;

	printf("\nEnter the Order of the First matrix...\n");
	scanf("%d %d",&r1,&c1);
	r2=r1; c2=c1;
	
	if(r1%2==0 || c1%2==0){
   		printf("Changing Matrix Size to ODD\n");
		r1+=1;
		c1+=1;
		printf("New Matrix Size = %d*%d\n",r1,c1);
	}

	p=(int**)malloc(r1*sizeof(int*));
	for(i=0;i<c1;i++)
	p[i]=(int*)malloc(c1*sizeof(int));

//Input Matrix1
for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
		scanf("%d",&p[i][j]);

    for(i=r2;i<r1;i++)
        for(j=0;j<=c1;j++)
            	p[i][j]=1;
	    
//Printing Input Matrix 

printf("\n Entered Matrix : \n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++)
        printf("%d ",p[i][j]);
    printf("\n");
}
   
// Addition
for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
                sum+=p[i][j];


printf("\nThe Addition of Matrix=%d\n",sum);
   

printf("\n");

return 0;
}
