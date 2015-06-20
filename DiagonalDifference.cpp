#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >>n;
    int a[100][100];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    ll sum1 =0, sum2 = 0;
    for (int i = 0; i<n; i++){
        sum1+= a[i][i];
        sum2+= a[i][n-i-1];
    }
    cout<< abs(sum1-sum2)<<endl;
    return 0;
}
