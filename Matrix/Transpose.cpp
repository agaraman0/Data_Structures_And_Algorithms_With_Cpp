#include <bits/stdc++.h> 
using namespace std; 
#define N 30
//Position this line where user code will be pasted.
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int A[N][N];
	    for(int i = 0;i<n;i++){
	        for(int j = 0;j<n;j++){
	            cin >> A[i][j];
	        }
	    }
	    
	    transpose(A, n);
	    
	    for (int i = 0; i < n; i++) 
    	{ 
    		for (int j = 0; j < n; j++) 
    		printf("%d ", A[i][j]); 
    	
    	}
    	cout<<endl;
	    
	}
	return 0; 
} 

/*This is a function problem.You only need to complete the function given below*/
/*  Function which converts A[][] to its transpose
*   n: size of matrix
*   N: globally defined for matrix
*   A: input matrix
*/
void transpose( int A[][N],int n) 
{ 
	// Your code here
	for(int i = 0;i<n;i++){
	    for(int j = i;j<n;j++){
	        int temp = A[i][j];
	        A[i][j] = A[j][i];
	        A[j][i] = temp;
	    }
	}
}
