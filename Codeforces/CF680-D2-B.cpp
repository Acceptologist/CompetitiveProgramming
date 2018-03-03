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
int n,a,ans=0,sum=0;
	cin>>n>>a;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i],sum+=v[i];
	if(v[a-1])++ans,--sum;
	--a;
	for(int i=1;i+a<n&&a-i>=0;i++){
		if(v[a+i]&&v[a-i])ans+=2;
		sum-=(v[a+i]+v[a-i]);
	}
	cout<<ans+sum<<endl;
}
