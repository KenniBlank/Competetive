// https://cses.fi/problemset/task/1643
// Maximum Subarray Sum
#include <bits/stdc++.h>
using namespace std;

#define max(a, b) (a) > (b)? (a): (b)

int main() {
	cin.sync_with_stdio(0);
	cin.tie(nullptr);

	int  i = 0;
	long n;
	cin >> n;
	long arr[n];
	while (i < n) {
		cin >> arr[i++];
	}

	// Naive Solution
	// long long bestSum = arr[0];
	// for (int k = 0; k < n; k++) {
	// 	for (int i = 0; i < n; i++) {
	// 		int sum = arr[k];
	// 		for (int j = k + 1; j <= i; j++) {
	// 			sum += arr[j];
	// 		}
	// 		if (sum > bestSum) {
	// 			bestSum = sum;
	// 		}
	// 	}
	// }
	// cout << bestSum << '\n';

	// Better:
	// long long bestSum = arr[0];
	// for (int i = 0; i < n; i++) {
	// 	int sum = 0;
	// 	for (int j = i; j < n; j++) {
	// 		sum += arr[j];
	// 		if (sum > bestSum) {
	// 			bestSum = sum;
	// 		}
	// 	}
	// }
	// cout << bestSum << '\n';

	// Textbook Solution:
	// This is brilliant:
	//
	long bestSum = arr[0];
	long sum = 0;
	for (int i = 0; i < n; i++) {
		sum = max(arr[i], sum + arr[i]);
		bestSum = max(bestSum, sum);
	}
	cout << bestSum << '\n';

	return 0;
}