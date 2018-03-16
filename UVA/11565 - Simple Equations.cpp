#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll t, a, b, c;
	bool found;
	cin >> t;
	while (t--) {
		found = false;
		cin >> a >> b >> c;
		for (ll i = -100; i <= 100; i++) {
			for (ll j = -100; j <= 100; j++) {
				for (ll k = -100; k <= 100; k++) {
					if (i * j * k == b && i + j + k == a
							&& i * i + j * j + k * k == c && i != j && j != k
							&& k != i) {
						cout << i << " " << j << " " << k << endl;
						found = true;
						break;
					}
				}
				if (found)
					break;
			}
			if (found)
				break;
		}
		if (!found)
			cout << "No solution." << endl;
	}
}

