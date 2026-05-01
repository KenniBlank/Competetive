// https://cses.fi/problemset/task/1069
// Repetitions
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Code...
	string line;
	getline(cin, line);

	char t;
	int len, tempLen;
	for (char a: line) {
		if (t != a) {
			t = a;
			tempLen = 1;
		} else {
			tempLen += 1;
		}

		if (len < tempLen) {
			len = tempLen;
		}
	}

	cout << len;

	return 0;
}
