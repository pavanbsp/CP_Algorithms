# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 1e3+5, mod = 1e9+7;
ll dp[N][N],n;

ll fun(ll i,ll k){
        if(k==0) return 0;
        if(i==0) return 1;
        if(dp[i][k]!=-1) return dp[i][k];
        dp[i][k] = fun(i-1,k)+fun(n-i,k-1);
        return dp[i][k]%mod;
}

void solve(){
        memset(dp,-1,sizeof(dp));
        ll k;
        cin >> n >> k;
        cout << fun(n,k)%mod << endl;
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
