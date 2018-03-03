#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/

int main() {
	fast
ll n,x,ans=0,p=0;
	cin>>n>>x;
	for(int i=1;i*i<=x;i++){
		if(x%i==0&&i<=n&&x/i<=n){if(i==x/i)++p;else ans++;}
	}
	cout<<ans*2+p<<endl;
}
