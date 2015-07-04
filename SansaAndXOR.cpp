#include <iostream>
using namespace std;

#define  LL long long

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while (t--)
	{
		LL n;
		cin>>n;
		LL ans = 0;
		for (int i = 0; i < n; ++i)
		{
			LL temp;
			cin >> temp;
			LL suba = ((LL)i + 1)*(n - (LL)i);
			if (suba%2 == 1) ans ^= temp;
		}
		cout<<ans<<endl;
	}
	return 0;
}