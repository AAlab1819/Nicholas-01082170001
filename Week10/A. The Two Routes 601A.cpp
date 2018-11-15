#include <bits/stdc++.h>

using namespace std;

bool adj[400][400];
bool visited[400];
int n,m;

int bfs(bool x){
    queue< pair<int,int> > q;
    q.push(make_pair(1,0));
    while(!q.empty()){
        int node = q.front().first;
        int time = q.front().second;
        q.pop();
        if(node == n )
            return time;

        if(visited[node])
            continue;
        visited[node] = true;

        for(int i=1 ; i<=n ; i++){
            if(adj[node][i]==x)
                q.push(make_pair(i,time+1));
        }
    }
    return -1;
}

int main()
{
    int u,v;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }
    u = bfs(true);
    memset(visited, false, sizeof(visited));
    v = bfs(false);
    if(u == -1 || v == -1)
        cout<<-1;
    else
        cout<<max(u,v);
    return 0;
}
