#include <bits/stdc++.h>
using namespace std;
void linearProbing(int hash[],int hashSize,int arr[],int sizeOfArray);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    int hash[hashSize];
	    
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    
	    
	    for(int i=0;i<hashSize;i++)
	    hash[i]=-1;
	    
	    linearProbing( hash, hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

void linearProbing(int hash[],int hashSize,int arr[],int sizeOfArray)
{
    //Your code here
    
    for(int i =0;i<sizeOfArray;i++)
    {
        int key = arr[i]%hashSize;
        
        if (hash[key] != -1){
            int tr = (key+1)%hashSize;
            while(tr != key && key<hashSize){
                if(hash[tr] == -1){
                    // cout<<"Hello"<<endl;
                    hash[tr] = arr[i];
                    // cout<<tr<<" "<<hash[tr]<<" "<<arr[i]<<endl;
                    break;
                }
                tr = (tr+1)%hashSize;
            }
        }
        else{
            hash[key] = arr[i];
        }
    }
}
