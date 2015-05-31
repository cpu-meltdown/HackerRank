#include <iostream>
#include <math.h>
using namespace std;

void primeFactors(int *a, int n, int &count)
{
	int j = 0;
	while (n % 2 == 0)
	{
		a[j] = 2;
		count++;
		j++;
		n = n / 2;
	}

	for (int i = 3; i <= int(sqrt(float(n))); i = i + 2)
	{
		while (n%i == 0)
		{
			a[j] = i;
			j++;
			count++;
			n = n / i;
		}
	}

	if (n > 2){
		a[j] = n;
		count++;
	}
}
int main()
{
	int n, count = 0;
	int a[100001];
	cin >> n;
	primeFactors(a, n, count);
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < count; i++){
		if (a[i] >= 10){
			while (a[i]>0){
				sum1 += a[i] % 10;
				a[i] /= 10;
			}
		}
		else
			sum1 += a[i];
	}
	while (n != 0){
		sum2 += n % 10;
		n /= 10;
	}
	(sum2 == sum1) ? cout << 1 << endl : cout << 0 << endl;
	return 0;
}