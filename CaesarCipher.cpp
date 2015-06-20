#include <iostream>
#include <string>
#include <stdio.h>
#define ll long long
using namespace std;

int main() {
	int n, k;
	string s;
	cin >> n >> s >> k;
	int i = 0;
	while (i < n){
		if (((int)s[i] >= 65 && (int)s[i] <= 90)){
			if (s[i] + k > 90)
				((s[i] + k) - 90) % 26 == 0 ? cout << 'Z' : cout << (char)(64 + (((s[i] + k)-90)%26));
			else
				cout << (char)(s[i] + k);
		}
		else if (((int)s[i] >= 97 && (int)s[i] <= 122)){
			if (s[i] + k > 122){
				((s[i] + k) - 122) % 26 == 0 ? cout << 'z' : cout << (char)(96 + (((s[i] + k)-122)%26));
			}
			else
				cout << (char)(s[i] + k);
		}
		else
			cout<<s[i];
		i++;
	}

	return 0;
}