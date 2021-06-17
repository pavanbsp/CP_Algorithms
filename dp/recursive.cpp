# include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=(a);i<(b);i++)
#define vll vector<ll>
#define endl '\n'
 
const ll N = 5e3+5, mod = 1e9+7;
ll n,ans;
vll a(N), b(N);

void fun(ll i,ll j,ll x){
	while(i>=0 && j<n){
		x-=a[i]*b[i];
		x-=a[j]*b[j];
		x+=a[i]*b[j];
		x+=a[j++]*b[i--];
		ans = max(ans,x);
	}
}


void solve(){
	cin >> n;
	f(i,0,n) cin >> a[i];
	f(i,0,n) cin >> b[i];
	f(i,0,n) ans+=a[i]*b[i];
	ll x = ans;
	f(i,1,n){
		fun(i-1,i,x);
		fun(i-1,i+1,x);
	}
	cout << ans << endl;
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