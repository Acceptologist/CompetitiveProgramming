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
	int t,a[30],ans;
	string s,x="MARGARITA";
	cin>>t;
	while(t--) {
		memset(a,0,sizeof(a));
		cin >> s;
		for(int i=0;i<s.size();i++)a[s[i]-'A']++;
		a[0]/=3;
		a['R'-'A']/=2;
		ans=s.size();
		for(int i=0;i<x.size();i++) {
			ans=min(a[x[i]-'A'],ans);
		}
		cout<<ans<<endl;
	}
}

