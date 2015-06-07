#include <iostream>
#include <vector>

using namespace std;

#define ll long long
void LIS(vector<ll> a){
	vector<vector<ll>> l(a.size());
	l[0].push_back(a[0]);
	for (int i = 1; i < a.size(); i++){
		for (int j = 0; j < i; j++){
			if ((a[j] < a[i]) && (l[i].size() < l[j].size()+1))
				l[i] = l[j];
		}
		l[i].push_back(a[i]);
	}
	ll max = 0;
	for (int i = 0; i < l.size(); i++)
		if (l[i].size() > max)
			max = l[i].size();
	cout << max;
}

int main(){
	vector<ll> a;
	ll n, number; 
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> number;
		a.push_back(number);
	}
	LIS(a);
	return 0;
}