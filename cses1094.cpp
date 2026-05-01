// https://cses.fi/problemset/task/1094
// Increasing Array
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Code...
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	long long minMoves = 0;
	for (int i = 0; i < (n - 1); i++) {
		if (arr[i + 1] < arr[i]) {
			int diff = arr[i] - arr[i + 1];
			minMoves += diff;
			arr[i + 1] += diff;
		}
	}

	cout << minMoves;
	return 0;
}
