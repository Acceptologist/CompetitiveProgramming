#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/

int main() {
	string s, ans = "";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]))
			ans += s[i];
		else if (s[i] == ' ')
			if (!isalpha(s[i + 1]))
				;
			else
				ans += ' ';
		else {
			ans += s[i];
			if (isalpha(s[i + 1]))
				ans += " ";
		}
	}
	cout << ans << endl;
}

