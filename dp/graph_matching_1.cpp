# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 5e3+5, mod = 1e9+7;
ll dp[N][N];
ll n, a[N];
vll x,y;

ll fun(ll i,ll j){
        if(i>=x.size()) return 0;
        if(j>=y.size()) return mod;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = min(abs(x[i]-y[j])+fun(i+1,j+1),fun(i,j+1));
        return dp[i][j];
}

void solve(){
        memset(dp,-1,sizeof(dp));
        cin >> n;
        f(i,0,n){
                cin >> a[i];
                if(a[i]) x.push_back(i);
                else y.push_back(i);
        }
        cout << fun(0,0);
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