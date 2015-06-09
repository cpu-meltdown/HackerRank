#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define ll long long
#define MAX 1000000

void LCS(ll *a, ll* b, int n, int m){
	int **arr = new int *[n + 1];
	for (int i = 0; i <= n; i++)
		arr[i] = new int[m + 1];
	for (int i = 0; i <= n; i++)
		arr[i][0] = 0;
	for (int i = 0; i <= n; i++)
		arr[0][i] = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (a[i - 1] == b[j - 1]){
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			else 
			 arr[i][j] = max(arr[i - 1][j],arr[i][j - 1]);
		}
	}
	int i = n; int j = m;
	stack<int> nums;
	while (i >= 1 && j >= 1){
		if (arr[i][j] == arr[i - 1][j] || arr[i][j] == arr[i][j - 1]){
			if (arr[i][j] == arr[i - 1][j]){
				i--;
			}
			else
				j--;
		}
		else{
			nums.push(b[j-1]);
			i--; j--;
		}
	}
	while (!nums.empty()){
		printf("%d ", nums.top());
		nums.pop();
	}
	for (int i = 0; i <= n; i++)
		delete[]arr[i];
	delete[] arr;
}

int main(){

	int n, m;
	cin >> n >> m;
	ll *a = new ll[n];
	ll * b = new ll[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i<m; i++)
		cin >> b[i];
	LCS(a, b, n, m);
	delete[]a;
	delete[]b;
	return 0;
}