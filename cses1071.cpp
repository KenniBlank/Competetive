// https://cses.fi/problemset/task/1071
// Number Spiral
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long type;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	type number_of_tests;
	cin >> number_of_tests;

	pair<type, type> pairs[number_of_tests];
	for (type i = 0; i < number_of_tests; i++) cin >> pairs[i].first >> pairs[i].second;

	for (type i = 0; i < number_of_tests; i++) {
		type y = pairs[i].first, x = pairs[i].second;

		type diagonal_element = max(y, x);
		type smallest = (diagonal_element - 1) * (diagonal_element - 1) + 1;
		type largest = diagonal_element * diagonal_element;

		type value = -1;
		if (x != y) {
			if (x > y) {
				value = (x % 2 == 0)? smallest + y - 1: largest - y + 1;
			} else {
				value = (y % 2 == 0)? largest - x + 1: smallest + x - 1;
			}
		} else {
			value = (smallest + largest) / 2;
		}
		cout << value << '\n';
	}

	return 0;
}