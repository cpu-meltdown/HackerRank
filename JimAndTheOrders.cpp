#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct order {
	int id;
	int pickedUp;
};

bool operator<(const order& l, const order& r){ return (l.pickedUp < r.pickedUp); }

int main() {
	int n;
	cin >> n;
	order arr[1000];
	int i = 0;
	int placed, needed;
	while (i < n)
		cin >> placed >> needed, arr[i].id = i + 1, arr[i].pickedUp = needed + placed, i++;
	stable_sort(arr, arr+n);
	for (int i = 0; i < n; i++)
		cout << arr[i].id << " ";
	return 0;
}