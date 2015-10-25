#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, t;
    cin >> t;
    
    while (t--){
        cin >> n >> k;
        int max = 0;
        for (int i = 1; i < n; i++){
            for (int j = i + 1; j <= n; j++){
                if (((i & j) > max) && ((i & j) < k)){
                    max = i & j;
                }
            }
        }
        
        cout << max << endl;
    }
    
    return 0;
}