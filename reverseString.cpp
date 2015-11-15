#include <iostream>

using namespace std;


void reverseString(char *str){

	char temp;
	for (int i = 0; i < (int)strlen(str)/2; i++){
		temp = str[i];
		str[i]=  str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}
}
int main(){
	char * str = new char();
	cin >> str;
	reverseString(str);
	cout << str << endl;
	return 0;
}