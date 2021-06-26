# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 1e3+5, mod = 1e9+7;
vll adj[N],vis(N,0);
ll x = 0,c;

ll dfs(ll u){
        c++;
        vis[u] = 1;
        for(auto i : adj[u]){
                if(!vis[i]) dfs(i);
        }
}

void solve(){
        adj[1].push_back(0);
        adj[0].push_back(3);
        adj[3].push_back(4);
        //adj[0].push_back(2);
        adj[2].push_back(1);
        //adj[5].push_back(6);
        //adj[5].push_back(2);
        //adj[6].push_back(0);
        f(i,0,5){
                if(!vis[i]){
                        dfs(i);
                        x = i;
                }
        }
        vis.assign(N,0);
        c = 0;
        dfs(x);
        if(c==5) cout << x;
}
 
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ll t=1;
        //cin >> t; 
        while(t--) solve();
        return 0;
}
        