#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int main() {
	fast();
	ll n, m, k;
	string s;
	cin >> s;
	vector<int> a(26);
	for (int i = 0; i < 26; i++)
		cin >> a[i];
	ll ans = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '?')
			++ans;
	if (ans == s.size()) {
		for (int i = 0; i < s.size(); i++)
			s[i] = 'a';
		cout << 0 << endl;
		cout << s << endl;
		return 0;
	}

	if (s[0] == '?') {
		char c, v;
		int mn = 10000000;
		c = s[s.find_first_not_of('?')];
		for (int i = 0; i < 26; i++) {
			if (abs(a[c - 'a'] - a[i]) < mn) {
				v = char(i + 'a');
				mn = abs(a[c - 'a'] - a[i]);
			}
		}
		for (int i = 0; i < s.size(); i++)
			if (s[i] == '?')
				s[i] = v;
			else
				break;
	}
//cout<<s<<endl;
	reverse(s.begin(), s.end());
	if (s[0] == '?') {
		char c, v;
		int mn = 10000000;
		c = s[s.find_first_not_of('?')];
		for (int i = 0; i < 26; i++) {
			if (abs(a[c - 'a'] - a[i]) < mn) {
				v = char(i + 'a');
				mn = abs(a[c - 'a'] - a[i]);
			}
		}
		for (int i = 0; i < s.size(); i++)
			if (s[i] == '?')
				s[i] = v;
			else
				break;
	}
	reverse(s.begin(), s.end());
//cout<<s<<endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '?') {
			char c1 = s[i - 1], c2, c3;
			for (int j = i; j < s.size(); j++)
				if (s[j] != '?') {
					c2 = s[j];
					break;
				}
			int mn = 10000000;
			for (int j = 0; j < 26; j++) {
				if (abs(a[c1 - 'a'] - a[j]) + abs(a[c2 - 'a'] - a[j]) < mn) {
					c3 = char(j + 'a');
					mn = abs(a[c1 - 'a'] - a[j]) + abs(a[c2 - 'a'] - a[j]);
				}
			}
			for (int j = i; j < s.size(); j++)
				if (s[j] == '?') {
					s[j] = c3;
				} else
					break;
		}
	}
	//cout<<s<<endl;
	ans = 0;
	for (int i = 1; i < s.size(); i++) {
		ans += abs(a[s[i] - 'a'] - a[s[i - 1] - 'a']);
	}
	cout << ans << endl;
	cout << s << endl;
}

