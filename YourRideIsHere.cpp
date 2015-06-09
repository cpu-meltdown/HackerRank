/*
ID: nabil_b2
PROG: ride
LANG: C++
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string str1, str2;
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	int i = 0;
	fin >> str1;
	fin >> str2;
	int m1 = 1, m2 = 1;
	while (str1[i] != '\0'){
		m1 *= (str1[i] - 'A' + 1);
		i++;
	}
	i = 0;
	while (str2[i] != '\0'){
		m2 *= (str2[i] - 'A' + 1);
		i++;
	}
	if ((m1 % 47) == (m2 % 47))
		fout << "GO" << endl;
	else
		fout << "STAY" << endl;
	return 0;
}