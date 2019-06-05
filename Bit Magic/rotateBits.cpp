#include<iostream> 

using namespace std; 
#define INT_BITS 32 
class gfg 
{ 
public: 
int leftRotate(int n, unsigned int d) 
{ 
	return (n << d)|(n >> (INT_BITS - d)); 
} 
int rightRotate(int n, unsigned int d) 
{ 
	return (n >> d)|(n << (INT_BITS - d)) & 0xFFFFFFFF; 
} 
}; 
int main() 
{ 
	gfg g; 
    int t;
    cin>>t;
    while(t--){
	int n;
	int d;
    cin>>n>>d;  
	cout << g.leftRotate(n, d)<<endl;  
	cout << g.rightRotate(n, d)<<endl;
    } 
} 
