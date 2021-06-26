# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 2e5+5, mod = 1e9+7; 
vll vis(6,0),adj[6];

void add(ll x,ll y){
        adj[x].push_back(y);
        adj[y].push_back(x);
}

ll bfs(ll x){
        vll level(6,0);
        queue<ll> q;
        vis[0] = 1;
        q.push(0);
        while(!q.empty()){
                ll i = q.front();
                q.pop();
                for(auto j : adj[i]){
                        if(!vis[j]){
                                level[j] = level[i] + 1;
                                vis[j] = 1;
                                q.push(j);
                        }
                }
        }
        ll ans = 0;
        f(i,0,6) if(level[i]==x) ans++;
        return ans;
}

void solve(){ 
        add(0,1);
        add(0,2);
        add(1,3);
        add(2,4);
        add(2,5);
        cout << bfs(0);
}
 
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ll t = 1;
        //cin >> t;
        while(t--) solve();
        return 0;
}
