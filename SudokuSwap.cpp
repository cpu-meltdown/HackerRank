#include <iostream>
#include <algorithm>
using namespace std;



void findDuplicate(int a[10][10], int ii, int jj, int * indices, int &indicesIndex){
	for (int i = 1; i < 10; i++){
		if (a[i][jj] == a[ii][jj] && i != ii){
			indices[indicesIndex] = ii;
			indices[indicesIndex] = jj;
			indicesIndex += 2;
			return;
		}
	}

	int j = 1;
	while (j < 10 && a[ii][j] != a[ii][jj] && j != jj){
		j++;
	}
	for (int i=1; i < 10; i++){
		if (a[i][j] == a[ii][jj] && i != ii){
			indices[indicesIndex] = ii;
			indices[indicesIndex + 1] = j;
			indicesIndex += 2;
			return;
		}
	}
	indices[indicesIndex] = min(ii,i);
	indices[indicesIndex + 1] = (ii == i)? min(jj,j) : jj;
	indices[indicesIndex + 2] = max(ii,i);
	indices[indicesIndex + 3] = (ii == i)? max(jj,j) : jj;
	indicesIndex += 4;
	
}

void findDuplicate1(int a[10][10], int ii, int jj, int *indices, int &indicesIndex){
	for (int j = 1; j < 10; j++){
		if (a[ii][j] == a[ii][jj] && j != jj){
			indices[indicesIndex] = ii;
			indices[indicesIndex] = jj;
			indicesIndex += 2;
			return;
		}
	}

	int i = 1;
	while (i < 10 && a[i][jj] != a[ii][jj] && i != ii){
		i++;
	}
	for (int j =1; j < 10; j++){
		if (a[i][j] == a[ii][jj] && i != ii){
			indices[indicesIndex] = i;
			indices[indicesIndex + 1] = jj;
			indicesIndex += 2;
			return;
		}
	}
	indices[indicesIndex] = min(ii,i);
	indices[indicesIndex + 1] = jj;
	indices[indicesIndex + 2] = max(ii,i);
	indices[indicesIndex + 3] = jj;
	indicesIndex += 4;
}

int main(){
	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++){
		int a[10][10] = { 0 };
		int temp[10] = { 0 };
		int indexI, indexJ;
		int indices[20] = { 0 };
		for (int i = 1; i < 10; i++){
			for (int j = 1; j < 10; j++){
				cin >> a[i][j];
			}
		}

		int indicesIndex = 0;
		for (int i = 1; i < 10; i++){
			for (int j = 1; j<10; j++){
				if (a[i][j] == 9)
					temp[9]++;
				else
					temp[a[i][j] % 9]++;
				if (temp[a[i][j] % 9] > 1){
					findDuplicate(a, i, j, indices, indicesIndex);
				}
			}
			for (int i = 1; i < 10; i++)
				temp[i] = 0;
		}
		for (int j = 1; j < 10; j++){
			for (int i = 1; i<10; i++){
				if (a[i][j] == 9)
					temp[9]++;
				else
					temp[a[i][j] % 9]++;
				if (temp[a[i][j] % 9] > 1){
					findDuplicate1(a, i, j, indices, indicesIndex);
				}
			}
			for (int i = 1; i < 10; i++)
				temp[i] = 0;
		}
		printf("Case #%d:\n", tt + 1);
		if (indices[0] != 0){
			for (int i = 0; i < indicesIndex; i += 4){
				printf("(%d,%d) <-> (%d,%d)\n", indices[i], indices[i + 1], indices[i + 2], indices[i + 3]);
			}
		}
		else
			cout << "Serendipity" << endl;
	}
	return 0;
}