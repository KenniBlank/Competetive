// https://cses.fi/problemset/task/1083
// Missing Number
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Code...
	long long n;
	cin >> n;

	long long expectedSum = n * (n + 1) / 2; // Sum of n natural numbers
	long long sum = 0;
	for (int i = 1; i < n; i++) {
		int temp;
		cin >> temp;
		sum += temp;
	}
	cout << (expectedSum - sum);
	return 0;
}
