#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
int main() {
	fast;
	ll t,n,h,a,b,sum,res;
	cin>>t;
	while(t--) {
		cin>>n>>h;
		vector<ll>v(n+2),ans(n+2);
		for(int i=0;i<n;i++) {
			cin>>a>>b;
			++a,++b;
			++v[a];--v[b+1];
		}
		sum=0;
		for(int i=0;i<n;i++) {
			sum+=v[i+1];
			ans[i+1]+=sum;
		}
		for(int i=1;i<=n;i++)ans[i]+=ans[i-1];
		res=0;
		for(int i=h;i<=n;i++) {
			res=max(ans[i]-ans[i-h],res);
		}
		cout<<h*n-res<<endl;
	}
}

