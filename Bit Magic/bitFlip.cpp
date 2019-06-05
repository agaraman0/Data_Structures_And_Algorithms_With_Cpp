#include<iostream>
using namespace std;

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
        int a,b;
        cin>>a>>b;
        cout<<brianKernighan(a^b)<<endl;
    }
}