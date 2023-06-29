#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 1e5; 
int n, m, en1[maxn], en2[maxn]; 
bool mrk[maxn], mrk_v[maxn]; 
vector < pair<int, int> > adj[maxn]; 
pair<int, int> e[maxn]; 
void dfs(int v){ 

    mrk_v[v] = true; 
    for(int i = 0; i < (int)adj[v].size(); i ++){ 
        //walking on the adjacent node
        if(mrk[ adj[v][i].second ] == true){ 
            continue;
        } 
        int u = adj[v][i].first; 
        if(!mrk_v[u]){ 
            dfs(u); 
        } 
    } 
    return; 
} 
bool check_connect(){ 
    int cnt = 0; 
    for(int i = 1; i <= n; i ++){ 
        mrk_v[i] = false; 
    } 
    dfs(1); 
    for(int i = 1; i <= n; i ++){ 
        if(mrk_v[i] == false){ 
            return false; 
        } 
    } 
    return true; 
} 
int main(){ 
    cout <<"give me the graph size and number of edges" <<endl; 
    cin >>n >>m; 
    cout <<"for each edge give me the end pointes and the weight" <<endl; 
    for(int i = 0; i < m; i ++){ 
        cin >>en1[i] >>en2[i] >>e[i].first; 
        int u = en1[i], v = en2[i];  
    } 
    sort(e, e + m); 
    int ans = 0; 
    cout <<"the mst edges are :" <<endl; 
    for(int i = m - 1; i >= 0; i --){ 
        mrk[x] = false; 
        cout <<en1[x] <<' ' <<en2[x] <<endl; 
        ans += e[i].first; 
    } 
 cout <<"mst weight is : " <<ans <<endl; 
 return false; 
} 