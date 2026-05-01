// https://cses.fi/problemset/task/1084
// Apartments
#include <bits/stdc++.h>
using namespace std;

// Two pointer solution
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	vector<int> a; // Applicants
	vector<int> b; // Size of apartment

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		b.push_back(temp);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int count = 0;
	for(int i = 0, j = 0; i < n && j < m; NULL) {
		if (abs(a[i] - b[j]) <= k) {
			count++;
			i++;
			j++;
		}
		else if (b[j] < a[i] - k) {
			j++;
		}
		else {
			i++;
		}
	}

	cout << count;
	return 0;
}
