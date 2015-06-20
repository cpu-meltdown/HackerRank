#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int positives=0, negatives=0, zeros=0;
    int n;
    cin>>n;
    int num;
    for (int i=0; i<n; i++){
        cin>> num;
        if (num > 0) positives++;
            else if (num<0) negatives++;
                else zeros++;   
    }
    printf ("%.3f\n%.3f\n%.3f\n", (float)positives/n, (float)negatives/n, (float)zeros/n);
}
