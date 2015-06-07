#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, a, b, c, d, dd;
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		cin >> x3 >> y3 >> z3;
		cin >> x4 >> y4 >> z4;
		a = (y2 - y1)*(z3 - z1);
		b = -1 * (z2 - z1)*(x3 - x1);
		c = (x2 - x1)*(y3 - y1);
		d = a*x1 + b*y1 + c*z1;
		dd = a*x4 + b*y4 + c*z4;
		if (d == dd)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}