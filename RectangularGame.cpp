#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	long long a = 1000000000, b = 1000000000;
	for (int i = 0; i < n; ++i) {
		long long x, y;
		cin >> x >> y;
		a = min(a, x);
		b = min(b, y);
	}

	cout << a * b << endl;

	return 0;
}