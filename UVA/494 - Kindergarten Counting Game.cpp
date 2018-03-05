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
	int c;
	while(getline(cin,s)) {
		ans="";c=0;
		for(int i=0;i<s.size();i++) {
			if(isalpha(s[i]))ans+=s[i];
			else {
				if(ans.size())++c;
				ans="";
			}
		}
		cout<<c<<endl;
	}
}

