#include <iostream>
#include <algorithm>
using namespace std;

int findContiguousMax(int * a, int n){
	int bestSum = a[0];
	int currentSum = a[0];
	for (int i = 1; i<n; i++){
		currentSum = max(a[i], currentSum + a[i]);
		bestSum = max(bestSum, currentSum);
	}
	return bestSum;
}

int findNonContiguousMax(int * a, int n){
	int bestSum = 0;
	sort(a, a + n);
	int i = 0;
	while (i < n && a[i] < 0){
		i++;
	}
	if (i == n)
		return a[n - 1];
	else{
		for (int j = i; j < n; j++)
			bestSum += a[j];
		return bestSum;
	}
}
int main(){
	int t;
	cin >> t;
	int n;
	while (t--){
		cin >> n;
		int * a = new int[n];
		for (int i = 0; i<n; i++)
			cin >> a[i];
		cout << findContiguousMax(a, n) << " ";
		cout << findNonContiguousMax(a, n) << endl;
		delete[]a;
	}
	return 0;
}