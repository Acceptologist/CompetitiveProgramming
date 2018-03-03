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
	int n;
	string s;
	while(cin>>n&&n) {
		cin>>s;
		int f=s.find('Z');
		if(f!=-1)cout<<0<<endl;
		else {
			int ans=20000000;
			int r,d;
			r=d=-1;
			for(int i=0;i<s.size();i++) {
				if(s[i]=='D')d=i;
				else if(s[i]=='R')r=i;
				if(r!=-1&&d!=-1)ans=min(ans,abs(r-d));
			}
			cout<<ans<<endl;
		}
	}
}

