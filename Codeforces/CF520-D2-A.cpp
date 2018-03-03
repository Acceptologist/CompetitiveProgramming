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
	cin >> n;
	list<char> l;
	char c;
	for (int i = 0; i < n; i++) {
		cin>>c;
		l.push_back(tolower(c));
	}
	l.sort();
	l.unique();
	if(l.size()==26)cout<<"YES";
	else cout<<"NO";
}
