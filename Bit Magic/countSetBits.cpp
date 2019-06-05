#include <bits/stdc++.h>      
using namespace std; 

unsigned int countSetBits(unsigned int n) 
{ 
unsigned int count = 0; 
while (n) 
{ 
    count += n & 1; 
    n >>= 1; 
} 
return count; 
} 
int countSetBitsRe(int n) 
{ 
    // base case 
    if (n == 0) 
        return 0; 
  
    else
  
        // if last bit set add 1 else add 0 
        return (n & 1) + countSetBitsRe(n >> 1); 
}
unsigned int brianKernighan(int n) 
{ 
    unsigned int count = 0; 
    while (n) 
    { 
    n &= (n-1) ; 
    count++; 
    } 
    return count; 
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<brianKernighan(n)<<endl;
    }
} 