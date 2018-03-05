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
	string s,ans;
	map<string,int>m;
	while(getline(cin,s)) {
		ans="";
		for(int i=0;i<s.size();i++) {
			if(isalpha(s[i]))ans+=tolower(s[i]);
			else {
				if(ans.size())m[ans]=1;
				ans="";
			}
		}
		if(ans.size())m[ans];
	}
	map<string,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)cout<<it->first<<endl;
}

