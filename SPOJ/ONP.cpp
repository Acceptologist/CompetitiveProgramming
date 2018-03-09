#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl "\n"
/************************************************************/
int prio(char a) {
	if (a == '+' || a == '-')
		return 1;
	if (a == '*' || a == '/')
		return 2;
	if (a == '^')
		return 3;
	return 0;
}
int main() {
	fast;
	int t;
	cin>>t;
	string s,ans;
	while(t--) {
		ans="";
		cin>>s;
		stack<char>st;
		for(int i=0;i<s.size();i++) {
			if(isalpha(s[i]))ans+=s[i];
			else if(s[i]=='(')st.push(s[i]);
			else if(s[i]==')') {
				while(st.top()!='(') {ans+=st.top();st.pop();}
				st.pop();
			}
			else {
				if(st.size()==0)st.push(s[i]);
				else {
					if(prio(s[i])>prio(st.top()))st.push(s[i]);
					else {
						while(!st.empty()&&prio(s[i])<=prio(st.top())) {ans+=st.top();st.pop();}
						st.push(s[i]);
					}
				}
			}
		}
		while(!st.empty()) {ans+=st.top();st.pop();}
		cout<<ans<<endl;
	}
}

