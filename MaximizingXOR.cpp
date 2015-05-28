#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a, b, min, max, current, best = 0;
	cin >> a >> b;
	min = min(a, b);
	max = max(a, b);
	for (int i = min; i <= max; i++) {
		for (int j = min; j <= max; j++){
			current = i ^ j;
			best = max (current, best);
		}
	}
	cout << best << endl;
	return 0;
}