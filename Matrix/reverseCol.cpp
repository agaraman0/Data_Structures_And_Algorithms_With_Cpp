#include <bits/stdc++.h>
using namespace std;
#define SIZE 50
void reverseCol(int n1, int m1, int arr1[SIZE][SIZE]);
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n1,m1;
        cin>>n1>>m1;
        int arr1[SIZE][SIZE];
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        cin>>arr1[i][j];
        
        reverseCol(n1, m1, arr1);
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            cout<<arr1[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//Complete this function
void reverseCol(int n1, int m1, int arr1[SIZE][SIZE])
{
    //Your code here
    for (int i = 0; i < n1; i++) {
		for (int j = 0; j < (m1 / 2); j++) {
			/** swap(a[i][j],a[i][m1-1-j]) **/
			arr1[i][j] ^= arr1[i][m1 - 1 - j];
			arr1[i][m1 - 1 - j] ^= arr1[i][j];
			arr1[i][j] ^= arr1[i][m1 - 1 - j];
		}
	}
}
