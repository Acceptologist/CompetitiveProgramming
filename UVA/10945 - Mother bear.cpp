#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
bool ispalind(string s) {
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1])
			return false;
	}
	return true;
}
int main() {
	fast;
	string s,ans;
	while(getline(cin,s)&&s!="DONE") {
		ans="";
		for(int i=0;i<s.size();i++) {
			if(isalpha(s[i]))ans+=tolower(s[i]);
		}
		if(ispalind(ans))cout<<"You won't be eaten!"<<endl;
		else cout<<"Uh oh.."<<endl;
	}
}

