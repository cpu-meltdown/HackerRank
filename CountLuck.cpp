#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct node{
	char value;
	bool visited;
	short indexi;
	short indexj;
	node* left;
	node* right;
	node* bottom;
	node* top;
	short wand;
};

int bfs(int n, int m, int orijini, int orijinj, node ** a){
	queue<node> q;

	int count = 0, wand = 0;
	
	a[orijini][orijinj].visited = 1;
	q.push(a[orijini][orijinj]);

	while (!q.empty()){
		count = 0;
		if (q.front().value == '*'){
			return a[q.front().indexi][q.front().indexj].wand;
		}
		else{
			if (q.front().indexi != 0 && !a[q.front().indexi - 1][q.front().indexj].visited && a[q.front().indexi - 1][q.front().indexj].value != 'X'){
				a[q.front().indexi - 1][q.front().indexj].visited = 1;
				a[q.front().indexi][q.front().indexj].top = &a[q.front().indexi - 1][q.front().indexj];
				q.push(a[q.front().indexi - 1][q.front().indexj]);
				count++;
			}
			if (q.front().indexi != n - 1 && !a[q.front().indexi + 1][q.front().indexj].visited && a[q.front().indexi + 1][q.front().indexj].value != 'X'){
				a[q.front().indexi + 1][q.front().indexj].visited = 1;
				a[q.front().indexi][q.front().indexj].bottom = &a[q.front().indexi + 1][q.front().indexj];
				q.push(a[q.front().indexi + 1][q.front().indexj]);
				count++;
			}
			if (q.front().indexj != m - 1 && !a[q.front().indexi][q.front().indexj + 1].visited && a[q.front().indexi][q.front().indexj + 1].value != 'X'){
				a[q.front().indexi][q.front().indexj + 1].visited = 1;
				a[q.front().indexi][q.front().indexj].right = & a[q.front().indexi][q.front().indexj + 1];
				q.push(a[q.front().indexi][q.front().indexj + 1]);
				count++;
			}
			
			if (q.front().indexj != 0 && !a[q.front().indexi][q.front().indexj - 1].visited && a[q.front().indexi][q.front().indexj - 1].value != 'X') {
				a[q.front().indexi][q.front().indexj - 1].visited = 1;
				a[q.front().indexi][q.front().indexj].left = &a[q.front().indexi][q.front().indexj - 1];
				q.push(a[q.front().indexi][q.front().indexj - 1]);
				count++;
			}

			if (count >= 1 ){
				if (count>1)
					a[q.front().indexi][q.front().indexj].wand++;
				if (a[q.front().indexi][q.front().indexj].bottom != NULL)
					a[q.front().indexi][q.front().indexj].bottom->wand = a[q.front().indexi][q.front().indexj].wand;
				if (a[q.front().indexi][q.front().indexj].left != NULL)
					a[q.front().indexi][q.front().indexj].left->wand = a[q.front().indexi][q.front().indexj].wand;
				if (a[q.front().indexi][q.front().indexj].right != NULL)
					a[q.front().indexi][q.front().indexj].right->wand = a[q.front().indexi][q.front().indexj].wand;
				if (a[q.front().indexi][q.front().indexj].top != NULL)
					a[q.front().indexi][q.front().indexj].top->wand = a[q.front().indexi][q.front().indexj].wand;
			}
			else if (count == 0){
				q.pop();
			}
		}
	}
	return 0;
}

int main() {
	
	int t, n, m, k, orijini, orijinj;
	cin >> t;
	while (t--){
		cin >> n >> m;
		node **a = new node*[n];
		for (int i = 0; i < n; i++)
			a[i] = new node[m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++){
				cin >> a[i][j].value;
				if (a[i][j].value == 'M'){
					orijini = i;
					orijinj = j;
				}
				a[i][j].visited = 0;
				a[i][j].indexi = i;
				a[i][j].indexj = j;
				a[i][j].wand = 0;
				a[i][j].left = NULL;
				a[i][j].right = NULL;
				a[i][j].bottom = NULL;
				a[i][j].top = NULL;
			}
		cin >> k;

		if (k == bfs(n, m, orijini, orijinj, a))
			cout << "Impressed"<<endl;
		else 
			cout << "Oops!" << endl;
		
	}
}
