#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
   int str1[26];
   int str2[26];
   for (int i = 0; i < 26; i++){
       str1[i] = 0;
       str2[i] = 0;
   }
   for (int i = 0; i < a.length(); i++){
	   str1[a[i] % 26]++;
	  
   }
   for (int i = 0; i < b.length(); i++){
	   str2[b[i] % 26]++;
   }
   int result = 0;
   for (int i = 0; i < 26; i++){
	   result += abs(str1[i] - str2[i]);
   }
   
   return result;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
