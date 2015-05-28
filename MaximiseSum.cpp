#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<set>
#define ll long long
#define pb push_back
ll pre[100008];
int main() {

	int t, n, i, j, k, l;
	cin >> t;

	while (t--)
	{
		long long m;
		cin >> n >> m;
		long long currentSum = 0;
		long long mx = 0;
		ll bestSum = 0;
		set<ll>s;
		for (i = 0; i<n; i++)
		{
			unsigned long long k;
			cin >> k;
			k %= m;
			currentSum = (currentSum + k) % m;
			set<ll>::iterator it;
			it = s.upper_bound(currentSum);

			bestSum = max(bestSum, currentSum);
			if (it != s.end())
				bestSum = max(bestSum, (currentSum - *it + 2 * m) % m);

			s.insert(currentSum);
		}
		cout << bestSum << "\n";

	}


	return 0;
}
