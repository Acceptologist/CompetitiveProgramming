#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
int a[100055];
int main() {
	fast;
	int n,l,r,t,m;
	cin>>n;
	vector<ll>v(n),csum(n+1),ocsum(n+1);
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=0;i<n;i++)csum[i+1]=v[i]+csum[i];
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)ocsum[i+1]=v[i]+ocsum[i];
	cin>>m;
	for(int i=0;i<m;i++) {
		cin>>t>>l>>r;
		if(t==1) {
			cout<<csum[r]-csum[l-1]<<endl;
		}
		else {
			cout<<ocsum[r]-ocsum[l-1]<<endl;
		}
	}
}
