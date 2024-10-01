#include<bits/stdc++.h>
using namespace std;
int n;
int kq=0;
int dinh;
vector<int> adj[100];
int dp[100];
void dfs(int u,int par){
    for(int x:adj[u]){
        if(x!=par){
            dp[x]=dp[u]+1;
            if(kq<dp[x]){ 
                kq=dp[x];
                dinh=x;
                }
            dfs(x,u);
        }
    }
}
int main(){
   int m;
   int a,b;
   cin >>m;
    for(int i=0;i<m-1;i++){
        cin >>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);  
    }
    dfs(1,0);
    memset(dp,0,sizeof(dp));
    dfs(dinh,0);
    cout<<kq;
}
    