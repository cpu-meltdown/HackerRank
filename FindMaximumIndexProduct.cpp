#include <algorithm>
#include<iostream>
#include<stack>
#include <vector>
using namespace std;

int num[100005], l[100005], r[100005], n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];

	stack<int> s;

	for(int i = 0; i < n; i++) {
		while (!s.empty() && num[s.top()] <= num[i]) s.pop();
		if (!s.empty()) l[i] = s.top();
		else l[i] = -1;
		s.push(i);
	}

	stack<int> t;
	for(int i = n - 1; i >= 0; i--) {
		while (!t.empty() && num[t.top()] <= num[i]) t.pop();
		if (!t.empty()) r[i] = t.top();
		else r[i] = -1;
		t.push(i);
	}
	long long ans = 0;
	for(int i = 0; i < n; i++)
		ans = max(ans, 1ll * (l[i] + 1) * (r[i] + 1));
	printf("%lld\n", ans);

	return 0;
}
