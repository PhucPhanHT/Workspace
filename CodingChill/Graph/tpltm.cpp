#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10000;

int n,m;
vector<int> adj[MAXN + 2],rev_adj[MAXN + 2];
bool visited[MAXN + 2];
vector<int> topo;

void enter(){
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        rev_adj[v].push_back(u);
    }
}

void dfs1(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if (!visited[v]){
            dfs1(v);
        }
    }
    topo.push_back(u);
}

void dfs2(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if (!visited[v]) dfs2(v);
    }
}

int main(){
    enter();
    for(int i = 1; i <= n;i++){
        if (!visited[i]){
            dfs1(i);
        }
    }
    memset(visited,0,sizeof visited);
    int scc = 0;
    while(!st.empty()){
        int u = st.top(); st.pop();
        if (!visited[u]){
            ++scc;
            dfs2(u);
        }
    }
    cout << scc;
    
    return 0;
}