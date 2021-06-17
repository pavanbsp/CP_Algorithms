# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 2e5+5, mod = 1e9+7;
ll dp[205][405];
ll n, a[205];

ll fun(ll i,ll t){
        if(i==n) return 0;
        if(t>=2*n) return mod;
        if(dp[i][t]!=-1) return dp[i][t];
        dp[i][t] = min(abs(t-a[i])+fun(i+1,t+1),fun(i,t+1));
        return dp[i][t];
}

void solve(){
        memset(dp,-1,sizeof(dp));
        cin >> n;
        f(i,0,n) cin >> a[i];
        sort(a,a+n);
        cout << fun(0,1) << endl;
}
 
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ll t=1;
        cin >> t; 
        while(t--) solve();
        return 0;
}