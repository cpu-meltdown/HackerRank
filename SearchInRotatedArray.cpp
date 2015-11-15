#include <iostream>
#include <string>
using namespace std;


int findIndex(int a[], int l, int r, int num){
	int index = 0;
	if (l <= r){
		int mid = (l + r) / 2;
		if (a[mid] == num)
			return mid;
		else
		if (a[l] < a[r])
		{
			if (num < a[mid])
				return findIndex(a, l, mid - 1, num);
			else
				return findIndex(a, mid+1, r, num);
		}
		else{
			if (num >= a[mid] && num > a[r])
				return findIndex(a, l , mid - 1, num);
			else
				return findIndex(a, mid+1, r, num);
		}
		return index;
	}
	else
		return -1;
}

int main() {
	int a [] = { 15, 16, 19, 20, 25, 1, 2, 3, 4, 5, 6, 7 };
	cout << findIndex (a, 0, sizeof(a)/sizeof(int) - 1, 7) << endl;
}