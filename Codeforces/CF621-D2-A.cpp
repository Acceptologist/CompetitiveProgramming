#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/

int main() {
	fast
	ll n, s = 0, mn = 1e17, x, odd = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;

		if (x & 1) {
			odd++;
			mn = min(x, mn);
		}

		s += x;
	}
	if (odd & 1)
		cout << s - mn << endl;
	else
		cout << s << endl;
}

