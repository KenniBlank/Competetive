#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int a, int k, int b) {
	int temp1[k - a + 1];
	int temp2[b - k];

	// Copy data inside temporary arrays
	for (int i = a; i <= k; i++) temp1[i - a] = arr[i];
	for (int i = k + 1; i <= b; i++) temp2[i - (k + 1)] = arr[i];

	// Merge back to array
	int i = a, j = k + 1;
	int arrI = a;
	while(i <= k && j <= b)
		if (temp1[i - a] < temp2[j - (k + 1)]) arr[arrI++] = temp1[i++ - a];
		else arr[arrI++] = temp2[j++ - (k + 1)];

	// Copy remaining elements
	while (i <= k) arr[arrI++] = temp1[i++ - a];
	while (j <= b) arr[arrI++] = temp2[j++ - (k + 1)];
}

void mergeSort(int* arr, int a, int b) {
	if (a >= b) return;

	int k = (a + b) / 2;
	mergeSort(arr, a, k);
	mergeSort(arr, k + 1, b);

	merge(arr, a, k, b);
}

int main(void) {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("test_arr.in", "r", stdin);

	// Input:
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergeSort(arr, 0, n - 1);

	// Sorted:
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}