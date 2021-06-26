# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 1e3+5, mod = 1e9+7;
vll adj[N];
ll vis[N][N];

void dfs(ll p, ll u,ll c){
        /*if(p==u){
                if(c==1) vis[p][u] = 1;
        }
        else vis[p][u] = 1;
        if index to same index needs path*/
        vis[p][u] = 1;
        for(auto i : adj[u]){
                if(!vis[p][i]) dfs(p,i,1);
        }
}

void solve(){
        adj[0].push_back(1);
        adj[0].push_back(2);
        adj[1].push_back(2);
        adj[2].push_back(0);
        adj[2].push_back(3);
        adj[3].push_back(3);
        f(i,0,4) dfs(i,i,0);
        f(i,0,4){
                f(j,0,4) cout << vis[i][j] << " ";
                cout << endl;
        }
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
        