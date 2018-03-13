#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	list<char> l;
	list<char>::iterator it;
	while (cin >> s) {
		l.clear();
		it = l.begin();
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '[')
				it = l.begin();
			if (s[i] == ']')
				it = l.end();
			if (s[i] != '[' && s[i] != ']')
				l.insert(it, s[i]);
		}
		for (it = l.begin(); it != l.end(); it++)
			printf("%c", *it);
		printf("\n");
	}
}

