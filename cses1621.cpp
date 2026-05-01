// https://cses.fi/problemset/task/1621
// Distinct Numbers
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Code...
	int n;
	cin >> n;

	set<int> set; // dont use unordered ones, they fail for bigger sizes
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		set.insert(temp);
	}

	cout << set.size();
	return 0;
}
