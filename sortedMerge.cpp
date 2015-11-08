#include <iostream>
using namespace std;

void mergeArrays(int a[], int b[], int lastA, int lastB){

	int i = lastA - 1;
	int j = lastB - 1;
	int index = lastA + lastB - 1;
	while (i >= 0 && j >= 0){
		if (a[i] > b[j]){
			a[index] = a[i];
			i--;
			index--;
		}
		else{
			a[index] = b[j];
			j--;
			index--;
		}
		
	}
	while (j >= 0){
		a[index] = b[j];
		j--;
	}
	while (i >= 0){
		a[index] = a[i];
		i--;
	}
}
int main() {
	//Merge two sorted arrays in place
 }