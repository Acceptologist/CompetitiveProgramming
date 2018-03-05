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
	string s,ans,res;
	while(getline(cin,s)) {
		ans="";res="";
		for(int i=0;i<s.size();i++) {
			if(s[i]!=' ')ans+=s[i];
			else {
				reverse(ans.begin(),ans.end());
				res+=ans;
				res+=s[i];
				ans="";
			}
		}
		reverse(ans.begin(),ans.end());
		res+=ans;
		cout<<res<<endl;
	}
}

