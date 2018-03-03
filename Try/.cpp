#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
string solve(string s) {
int i,sz=s.size();
for(i=0;i<sz/2;i++)if(s[i]!=s[sz-i-1])break;
if(i==sz/2)return s;
string x,y;
x=s.substr(0,sz-i)+s[i]+s.substr(sz-i);
y=s.substr(0,i)+s[sz-i-1]+s.substr(i);
x=solve(x);
y=solve(y);
if(x.size()<y.size())return x;
else return y;
}
int main() {
	string s,ans;
	while(cin >> s){
	ans=solve(s);
	cout<<(int)ans.size()-(int)s.size()<<" "<<ans<<endl;
	}
}


