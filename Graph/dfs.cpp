#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0,g,vis);
        
        cout<<endl;
    }
}
void dfs(int s, vector<int> g[], bool vis[])
{    
    if(vis[s]!=true){
        cout << s <<" ";
        vis[s]=true;
    }
    else return;
    
    for(auto i:g[s])dfs(i,g,vis);
    
}
