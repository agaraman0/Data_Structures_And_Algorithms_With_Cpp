#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{  
   int t;
   cin>>t;
   while(t--)
    {  int v, e;
       cin>>v>>e;
       int a, b;
       vector<int> adj[v];
       for(int i=0;i<e;i++)
       {
 		    cin>>a>>b;
 		    adj[a].push_back(b);
 		    adj[b].push_back(a);
       }
		printGraph(adj, v);
       
     }
    return 0;
}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) 
    { 
        cout<< v; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        cout<<"\n"; 
    } 
}
