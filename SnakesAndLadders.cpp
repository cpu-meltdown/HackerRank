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
	int snakeTo = -1;
	bool visited = 0;
	short index;
};


int dfs(node* a){
	queue<node> q;
	a[1].distance = 0;
	q.push(a[1]);
	while (!q.empty()){
		if (q.front().ladderTo != -1){
			if (q.front().distance < a[q.front().ladderTo].distance)
				a[q.front().ladderTo].distance = q.front().distance;
			q.push(a[q.front().ladderTo]);
		}
		if (q.front().snakeTo != -1){
			if (a[q.front().snakeTo].distance > q.front().distance){
				a[q.front().snakeTo].distance = q.front().distance;
				q.push(a[q.front().snakeTo]);
			}
			else{
				q.pop();
				continue;
			}
		}
		if (q.front().index > 93){
			int temp = 100 - q.front().index;
			for (int i = 1; i <= temp; i++){
				if (a[q.front().index + i].distance > q.front().distance + 1)
					a[q.front().index + i].distance = q.front().distance + 1;
				q.push(a[q.front().index + i]);
			}
		}
		else{
			for (int i = 1; i<7; i++){
				if (a[q.front().index + i].distance > q.front().distance + 1)
					a[q.front().index + i].distance = q.front().distance + 1;
				if (!a[q.front().index + i].visited){
					a[q.front().index + i].visited = true;
					q.push(a[q.front().index + i]);
				}

			}
		}
		q.pop();
	}
	return a[100].distance;
}

int main(){
	int t;
	cin >> t;
	int num1, num2, n, m;
	while (t--){
		node * a = new node[101];
		for (int i = 1; i<101; i++)
			a[i].index = i;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> num1 >> num2;
			a[num1].ladderTo = num2;
		}
		cin >> m;
		int * snakesArr = new int[m];
		for (int i = 0; i < m; i++){
			cin >> num1 >> num2;
			a[num1].snakeTo = num2;
		}
		int j, count;
		for (int i = 2; i < 101; i++){
			j = i;
			count = 0;
			while (count <= 6 && j<100 && a[j].snakeTo != -1){
				count++;
				j++;
			}
			if (count == 6){
				break;
			}
		}
		if (count != 6)
			cout << dfs(a) << endl;
		else
			cout << -1 << endl;
		delete[] a;
	}
}

