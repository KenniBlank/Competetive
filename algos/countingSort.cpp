// CountingSort
// TODO
#include <bits/stdc++.h>

using namespace std;

int abs(int a) {
	return a >= 0? a: -1 * a;
}

int main(void) {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("test_arr.in", "r", stdin);

	int n;
	std::cin >> n;
	if (n < 0) return 0;

	int arr[n];
	cin >> arr[0];
	int min = arr[0], max = arr[0];
	for (int i = 1; i < n; i++) {
		std::cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
		} else if (min > arr[i]) {
			min = arr[i];
		}
	}

	int a_min = abs(min);
	int size = max + a_min + 1;
	cout << "Min: " << min << '\n';
	cout << "Max: " << max << '\n';
	cout << "Size: " << size << '\n';
	int countingSortBookmark[size];
	for (int i = 0; i < size; i++) {
		countingSortBookmark[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		countingSortBookmark[arr[i] + a_min]++;
	}

	for (int i = 0, j = 0; i < size; i++) {
		while (countingSortBookmark[i] != 0) {
			arr[j++] = i + min;
			countingSortBookmark[i]--;
		}
	}

	// Shorted:
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';

	return 0;
}