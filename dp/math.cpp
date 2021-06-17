# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'

const ll N = 1e3+1, mod = 1e9+7;
ll dp[N][N],n;

ll fun(ll x,ll k){
	if(k==0) dp[x][k] = 0;
	else if(x==0) dp[x][k] = 1;
	else if(dp[x][k]!=-1) {}
	else dp[x][k] = fun(x-1,k)+fun(n-x,k-1);
	dp[x][k]%=mod;
	return dp[x][k];
}

void solve(){
	memset(dp,-1,sizeof(dp));
	ll k;
	cin >> n >> k;
	cout << fun(n,k) << endl;
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