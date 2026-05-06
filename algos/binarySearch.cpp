#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("test_arr.in", "r", stdin);

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int search;
	cin >> search;

	// Sorting
	sort(arr, arr + n);

	// Binary search
	// Standard:
	// 	n/2, then search in other half
	// 	n/2, where n is now lenght of new length of half (containing) the element
	// 	... until element found
	int a = 0, b = n - 1;
	while (a <= b) {
		int k = (a + b) / 2;
		if (arr[k] == search) {
			cout << "Found it!" << '\n';
		}

		if (arr[k] > search) b = k - 1;
		else a = k + 1;
	}

	// Jump method
	// n/2 -> n/4 -> n/8 increment until the element is found
	// Unidirectionally: left to right but will find element throughout array
	int k = 0;
	for (int b = n /2; b >= 1; b /= 2) {
		while ((k + b) < n && arr[k + b] <= search) {
			k += b;
		}
	}
	if (arr[k] == search) {
		cout << "Found it!" << '\n';
	} else {
		cout << "Not Found!" << '\n';
	}

	return 0;
}