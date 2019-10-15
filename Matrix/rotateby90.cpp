#include<bits/stdc++.h>
using namespace std;
#define N 50
//Position this line where user code will be pasted.
int main()
{
	int t;
	cin>>t; //inputting testcases
	while(t--)
	{
		int n;
		cin>>n; //inputing n for square matrix
		int a[N][N],i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j]; //Inputting the matrix
			}
		}
		
		rotateby90(n, a);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<" "; //printing the resultant matrix
			}
		}
		cout<<endl;
	    
	}
	return 0;
}
void rotateby90(int n, int a[][N]){
    
	for(int i = 0;i<n;i++){
	    for(int j = i;j<n;j++){
	        int temp = a[i][j];
	        a[i][j] = a[j][i];
	        a[j][i] = temp;
	    }
	}
	for (int i = 0; i < n; i++) 
        for (int j = 0, k = n - 1; j < k; j++, k--) 
            swap(a[j][i], a[k][i]); 
    
}
