#include<iostream>
using namespace std;

//main(){
void change(int x, int y, int &z) {
        x = y + z;
        y = x + z;
        z = x + y;
        return;
}
int main() {
        int i = 2, j = 3;
        change(i, j, j);
        cout << i << j << endl;
        return 0;
}



/*===============================================================================================*/
#if 0
int fun(int *b, int n){
    int count=0;
    count = 6 - n;
    if(n<=0)
       return 0;
    else if(b[count]%3==0)
       return b[count] + fun(b,n-1);

    else
       return b[count] - fun(b,n-1);
}
int main() {
    int a[] ={12, 11, 10, 9, 8, 7};
    cout<<fun(a, 6)<<endl;
    return 0;
}
#endif
/*===============================================================================================*/
#if 0    
	int x;
	int j;
	int count=0; 
	for(j=-1; j<=3; j++){ 
	   x=j; 
	   if((x*x*x + x*x - x) == 1) 
		cout<<"j="<<j<<"count="<< count++<<"\n"; 
	} 
	cout<<count; 
#endif
/*===============================================================================================*/

#if 0    
int N=5, i, j, a[11], b[11]; 
a[0]=3; 
b[0]=0; 
a[1]=2; 
for(i=1;i<N;i=i+1){ 
   b[i]=a[i-1]+b[i-1]; 
   if(i>=2) 
      a[i]=a[i-1]+b[i-2]; 
} 
i=0; 
while(i<N){ 
   a[2*(N-i-1)]=a[N-i-1]; 
   a[2*(N-i-1)+1]=b[N-i-1]; 
   i++; 
} 
for(i=0;i<2*N;i++) 
   cout << a[i]<<" "; 

#endif 
/*===============================================================================================*/


/*===============================================================================================*/
#if 0
int tmp, i, j=0, n=8, y=12; 
int A[8]={5,7,12,15,20,2,0,30}; 
for(i=0;i<n;i++){ 
   if(A[i] < y){ 
      int tmp = A[j]; 
      A[j] = A[i]; 
      A[i] = tmp; 
      j++; 
   } 
} 
int s=0; 
for(i=0;i<n;i++){ 
   s=s+A[i]; 
} 
cout<<s/n; 
}

#endif
