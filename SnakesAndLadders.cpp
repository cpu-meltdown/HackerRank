#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

struct node {
	int distance = 10000001;
	int ladderTo = -1;
	bool visited = 0;
	bool snake = 0;
};

int dfs(node* a){
	queue<node> q;
	a[1].distance = 0;
	q.push(a[1]);
	int i = 1;
	while (!q.empty()){
		
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	int num1, num2, n, m;
	node * a = new node[101];
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> num1>> num2;
			a[num1].ladderTo = num2;
		}
		cin >> m;
		int * snakesArr = new int[m];
		for (int i = 0; i < m; i++){
			cin >> num1 >> num1;
			a[num1].snake = 1;
		}

		cout << dfs(a);
	}
}

