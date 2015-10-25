#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
int main() {
    ll n, t, res = 0;
    cin >> n >> t;
    ll mod = n % 2;
    ll div = n / 2;
    res = div % 2 == 0 ? div : (-1) * (div + 1);
    res += t;
    
    if (mod != 0)  
        res += (div+1) % 2 == 0 ? (div + 1) : (-1) * (div +1);
    cout << res;
    return 0;
}