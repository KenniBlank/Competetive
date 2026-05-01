// https://cses.fi/problemset/task/1163
// Traffic Lights
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Code...
	int x, n;
	cin >> x >> n;

	set<int> inputs = {0, x};
	multiset<int> segments = {x};

	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;

		auto right = *inputs.upper_bound(in);
		auto left = *(--inputs.upper_bound(in));

		int distWithRight = right - in;
		int distWithLeft = in - left;

		int removeValue = right - left;
		segments.erase(segments.find(removeValue));

		inputs.insert(in);
		segments.insert(distWithLeft);
		segments.insert(distWithRight);

		cout << *(--segments.end()) << " ";
	}

	return 0;
}
