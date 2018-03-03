#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/

int main() {

	int a = 0, b = 0, n, x;
	for (int i = 0; i < 3; i++) {
		cin >> x;
		a += x;
	}
	for (int i = 0; i < 3; i++) {
		cin >> x;
		b += x;
	}
	cin >> n;
	if (!a) {
		if (n * 10 >= b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	} else if (!b) {
		if (n * 5 >= a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	} else {
		int na, nb;
		na = a / 5 + bool(a % 5);
		nb = b / 10 + bool(b % 10);
		if (na + nb <= n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

