#include<iostream> 
using namespace std; 
int checkSparse(int n) 
{ 
	if (n & (n>>1)) 
		return 0; 

	return 1; 
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    	cout << checkSparse(n) << endl; 
    }
	return 0; 
} 
