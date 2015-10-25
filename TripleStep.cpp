#include <iostream>
#include <array>
using namespace std;


int numberOfWays(int n, long *memo){

	if (n < 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (memo[n] > -1)
		return memo[n];
	else{
		memo[n] = numberOfWays(n - 1, memo) + numberOfWays(n - 2, memo) + numberOfWays(n - 3, memo);
		return memo[n];
	}
}
int main(){

	long memo[1000];
	int n;
	fill(memo, memo + 1000, -1);
	cin >> n;

	cout << numberOfWays(n, memo) << endl;
}