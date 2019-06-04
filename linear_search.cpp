#include<iostream>

using namespace std;

int search(int arr[], int n, int x){

	int i;

	for(i = 0;i < n;i++){

		if (arr[i] == x){
			return i;
		}
	}

	return -1;
}

int main(){

	int arr[] = {10,20,30,40,50,60};

	int x = 40;

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<search(arr,n,x)<<"\n";

	return 0;
}