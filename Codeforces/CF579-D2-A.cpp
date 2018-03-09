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
	ll n,ans=0;
	cin>>n;
	while(n) {
		if(n&1)++ans;
		n/=2;
	}
	cout<<ans<<endl;
}
