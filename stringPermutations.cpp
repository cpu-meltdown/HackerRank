#include <iostream>
#include <array>
#include <string>
using namespace std;

void swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void permutations(char *str, int l, int r){
	if (l == r)
		cout << str << endl;
	else{
		for (int i = l; i < r; i++){
			swap((str + l), (str + i));
			permutations(str, l + 1, r);
			swap((str + l), (str + i));
		}
	}
}

int main() {
	string strs;
	cin >> strs;
	char *str = &strs[0];
	permutations(str, 0, strs.length());
	return 0;
}