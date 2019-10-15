#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int maximum(int a, int b); 
int minimum(int a, int b); 

int findMedianSortedArrays(int *a, int n,  
                              int *b, int m) 
{ 
      
    int min_index = 0, max_index = n, i, j, median; 
      
    while (min_index <= max_index) 
    { 
        i = (min_index + max_index) / 2; 
        j = ((n + m + 1) / 2) - i; 

        if (i < n && j > 0 && b[j - 1] > a[i])         
            min_index = i + 1; 


        else if (i > 0 && j < m && b[j] < a[i - 1])         
            max_index = i - 1; 

        else
        { 

            if (i == 0)             
                median = b[j - 1];             
              

            else if (j == 0)             
                median = a[i - 1];             
            else            
                median = maximum(a[i - 1], b[j - 1]);             
            break; 
        } 
    } 

    if ((n + m) % 2 == 1) 
        return (double)median; 

    if (i == n) 
        return (median+b[j]) / 2; 

    if (j == m) 
        return (median + a[i]) / 2; 
      
    return (median + minimum(a[i], b[j])) / 2; 
} 

int maximum(int a, int b)  
{ 
    return a > b ? a : b; 
} 

int minimum(int a, int b)  
{ 
    return a < b ? a : b;  
} 

int main() 
{   
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int j = 0;j<m;j++){
            cin>>b[j];
        }
    
    if (n < m) 
        cout<< findMedianSortedArrays(a, n, b, m)<<endl; 
    else
        cout<< findMedianSortedArrays(b, m, a, n)<<endl; 
  }
  return 0;
}
