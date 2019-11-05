int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis, N);
        cout<<endl;
    }
}
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    for(int i =0;i<N;i++){
        vis[i] = false;
    }
    
    queue<int>q;
    q.push(s);
    vis[s] = true;
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(auto v : adj[u]){
            if (vis[v] == false){
                q.push(v);
                vis[v] = true;
            }
        }
    }
}
