#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> A = {11,2,3,4,15};


    cout<<A[1]<<endl;
    cout<<A[2]<<endl;
    sort(A.begin(),A.end());

    bool present = binary_search(A.begin(),A.end(),15);

    A.push_back(200);
    A.push_back(200);
    A.push_back(200);
    A.push_back(200);

    A.push_back(250);

    present = binary_search(A.begin(),A.end(),200);

    vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);

    cout<<*it<<" "<<*it2<<endl;
    cout<<it-it2<<endl;
    cout<<present<<endl;
}