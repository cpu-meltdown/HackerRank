#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
	int n, m, c[100001];
	cin >> n >> m;
	//enter coins
	for (int i = 0; i < m; i++)
		cin >> c[i];
	int *best = new int[n+1];
	for (int i = 0; i <= n; i++)
		best[i] = INT_MAX;
	best[0] = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < m; j++){
			if (c[j] <= i && ((best[i - c[j]] + 1) < best[i]))
				best[i] = best[i - c[j]] + 1;
		}
	}
	cout << best[n]<<endl;
	delete[]best;
	return 0;
}