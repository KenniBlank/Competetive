#include <iostream>

#define swap(a, b) do { \
	int tmp = a;        \
	a = b;              \
	b = tmp;            \
} while(0)

using namespace std;

int main(void) {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("test_arr.in", "r", stdin);

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Bubble Sort
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	cout << "Sorted Array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}