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
	int n,c;
	while(cin>>n&&n) {
		bitset<32>b,x,y;
		b=n;
		c=0;
		for(int i=0;i<32;i++) {
			if(b[i])++c;
			if(c&1) x[i]=b[i];
			else y[i]=b[i];
		}
		cout<<x.to_ulong()<<" "<<y.to_ulong()<<endl;
	}
}

