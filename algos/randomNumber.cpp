#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
	freopen("test_arr.in", "w", stdout);
	srand(time(0));

	int n;
	cin >> n;
	cout << n << '\n';
	for (int i = 0; i < n; i++) {
		int res = rand() % n;
		res *= rand() % 2 == 0? -1: 1;
		cout << res << " ";
	}

	return 0;
}