# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 2e5+5, mod = 1e9+7;
ll dp[10][N];

ll fun(ll n,ll m){
        if(m==0) return dp[n][m] = 1;
        if(dp[n][m]!=-1) return dp[n][m];
        if(n==9) dp[n][m] = fun(0,m-1)+fun(1,m-1);
        else dp[n][m] = fun(n+1,m-1);
        return dp[n][m]%mod;
}

void solve(){
        ll m;
        string n;
        cin >> n >> m;
        ll ans = 0;
        for(auto i : n) (ans+=fun(i-'0',m))%mod;
        cout << ans%mod << endl;
}
 
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        memset(dp,-1,sizeof(dp));
        ll t=1;
        cin >> t; 
        while(t--) solve();
        return 0;
}
