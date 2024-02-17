#include <iostream>
#include <queue>

using namespace std;

int n, m, v;
int start;
int arr[1001][1001] = { 0, };
int visitedbfs[1001] = { 0, };
int visiteddfs[1001] = { 0, };
int dfs(int node);
int bfs(int node);

int main() {


	cin >> n >> m >> v;

	int x, y;


	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &x, &y);

		arr[x][y] = 1;
		arr[y][x] = 1;

	}

	visitedbfs[v] = 1;

	visiteddfs[v] = 1;

	printf("%d ", v);
	dfs(v);
	printf("\n");
	bfs(v);


}

int dfs(int node) {
	for (int i = 1; i <= n; i++) {
		if (arr[node][i] == 1) {
			if (visiteddfs[i] == 0) {
				printf("%d ", i);
				visiteddfs[i] = 1;
				dfs(i);
			}
		}
	}

	return 0;


}

int bfs(int node) {
	queue<int> q;
	q.push(node);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 1; i <= n; i++) {
			if (arr[x][i] == 1) {
				if (visitedbfs[i] == 0) {
					q.push(i);
					visitedbfs[i] = 1;
				}
			}
		}

	}

	return 0;



}