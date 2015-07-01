#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, q;
	cin >> n >> k >> q;
	int a[100000];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int index;
	if (k % n == 0){
		for (int i = 0; i < q; i++){
			cin >> index;
			cout << a[index] <<endl;
		}
	}
	else{
		k %= n;
		for (int i = 0; i < q; i++){
			cin >> index;
			if (index - k < 0){
				cout << a[n-abs(index - k)] <<endl;
			}
			else
				cout << a[index - k]<<endl;
		}
	}
	
	return 0;
}