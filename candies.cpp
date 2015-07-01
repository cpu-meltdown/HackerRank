#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N, 0), B(N, 1);
	for (int i = 0; i<N; ++i) 
		cin >> A[i];
	for (int i = 1; i < N; ++i) {
		if (A[i]>A[i - 1])
			B[i] = B[i - 1] + 1;
	}

	for (int j = N - 2; j >= 0; --j) {
		if (A[j] > A[j + 1])
			B[j] = max(B[j], B[j + 1] + 1);
	}
	int sum = 0;
	for (int i = 0; i<N; ++i) 
		sum += B[i];
	cout << sum << endl;
	return 0;
}