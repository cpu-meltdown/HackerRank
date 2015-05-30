#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct node {
	int value;
	bool visited = false;
	short x;
	short y;
};

int bfs(node **a, int i, int j, int m, int n){
	queue<node> q;
	int currentRegion = 0;
	currentRegion++;
	a[i][j].visited = true;
	q.push(a[i][j]);
	while (!q.empty()){
		if (q.front().x < m - 1 && a[q.front().x + 1][q.front().y].value == 1 && a[q.front().x+1][q.front().y].visited == false){
			a[q.front().x + 1][q.front().y].visited = true;
			q.push(a[q.front().x + 1][q.front().y]);
			currentRegion++;
		}
		if (q.front().x < m - 1 && q.front().y < n - 1 && a[q.front().x + 1][q.front().y + 1].value == 1 && a[q.front().x+1][q.front().y+1].visited == false){
			a[q.front().x + 1][q.front().y + 1].visited = true;
			q.push(a[q.front().x + 1][q.front().y+1]);
			currentRegion++;
		}
		if (q.front().x <m-1 && q.front().y > 0 && a[q.front().x + 1][q.front().y - 1].value == 1 && a[q.front().x + 1][q.front().y - 1].visited == false){
			a[q.front().x + 1][q.front().y - 1].visited = true;
			q.push(a[q.front().x + 1][q.front().y - 1]);
			currentRegion++;
		}
		
		if (q.front().x > 0 && a[q.front().x - 1][q.front().y].value == 1 && a[q.front().x - 1][q.front().y].visited == false){
			a[q.front().x - 1][q.front().y].visited = true;
			q.push(a[q.front().x - 1][q.front().y]);
			currentRegion++;
		}
		if (q.front().x > 0  && q.front().y < n - 1 && a[q.front().x - 1][q.front().y + 1].value == 1 && a[q.front().x - 1][q.front().y + 1].visited == false){
			a[q.front().x - 1][q.front().y + 1].visited = true;
			q.push(a[q.front().x - 1][q.front().y + 1]);
			currentRegion++;
		}
		if (q.front().x > 0 && q.front().y > 0 && a[q.front().x - 1][q.front().y - 1].value == 1 && a[q.front().x - 1][q.front().y - 1].visited == false){
			a[q.front().x - 1][q.front().y - 1].visited = true;
			q.push(a[q.front().x - 1][q.front().y - 1]);
			currentRegion++;
		}

		if (q.front().y < n - 1 && a[q.front().x][q.front().y + 1].value == 1 && a[q.front().x][q.front().y + 1].visited == false){
			a[q.front().x][q.front().y + 1].visited = true;
			q.push(a[q.front().x][q.front().y + 1]);
			currentRegion++;
		}
		if (q.front().y > 0 && a[q.front().x][q.front().y - 1].value == 1 && a[q.front().x][q.front().y - 1].visited == false){
			a[q.front().x][q.front().y - 1].visited = true;
			q.push(a[q.front().x][q.front().y - 1]);
			currentRegion++;
		}
		q.pop();
	}
	return currentRegion;
}
int main(){
	int m, n;
	int longestRegion = 0;
	cin >> m >> n;
	node ** a = new node *[m];
	for (int i = 0; i < m; i++)
		a[i] = new node[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++){
			cin >> a[i][j].value;
			a[i][j].x = i;
			a[i][j].y = j;
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j].value == 1 && a[i][j].visited == false){
				longestRegion = max(longestRegion, bfs(a, i, j, m, n));
			}
		}
	}
	delete[] a;
	cout << longestRegion << endl;
}