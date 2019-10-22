#include <bits/stdc++.h>
using namespace std;
#define SIZE 100
//Position this line where user code will be pasted.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        int n1,m1;
        cin>>n1>>m1;
        int arr1[SIZE][SIZE];
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        cin>>arr1[i][j];
        
        exchangeColumns(n1, m1, arr1);
        cout<<endl;
    }
    
	return 0;
}
void exchangeColumns(int n1, int m1, int arr1[SIZE][SIZE]){
    
    // Your code here
    for (int x = 0;x<n1;x++){
        int temp = arr1[x][0];
        arr1[x][0] = arr1[x][m1-1];
        arr1[x][m1-1] = temp;
    }
    for(int i=0;i<n1;i++)
    for(int j=0;j<m1;j++)
        cout<<arr1[i][j]<<" ";
    
}
