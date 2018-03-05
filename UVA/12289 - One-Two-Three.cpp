#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
int point(string s, string a) {
	int res = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == a[i])
			++res;
	return res;
}
int main() {
	fast;
	int t;
	cin>>t;
	string x,y,s;
	x="one",y="two";
	while(t--) {
		cin>>s;
		if(s.size()!=3)cout<<3<<endl;
		else {
			if(point(s,x)>point(s,y))cout<<1<<endl;
			else cout<<2<<endl;
		}
	}
}

