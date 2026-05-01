// https://cses.fi/problemset/task/1091/
// Concert Tickets
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	multiset<int> h;
	vector<int> t;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		h.insert(temp);
	}
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		t.push_back(temp);
	}

	for (int maxPrice: t) {
		multiset<int>::iterator lowerBound = h.lower_bound(maxPrice);
		if (lowerBound != h.end()) {
			if (*lowerBound == maxPrice) {
				cout << *lowerBound << endl;
				h.erase(lowerBound);
			} else if (lowerBound != h.begin()) {
				lowerBound = --lowerBound;
				cout << *lowerBound << endl;
				h.erase(lowerBound);
			} else {
				cout << "-1\n";
			}
		} else {
			if (lowerBound != h.begin()) {
				lowerBound = --lowerBound;
				cout << *lowerBound << endl;
				h.erase(lowerBound);
			} else {
				cout << "-1\n";
			}
		}
	}

	return 0;
}
