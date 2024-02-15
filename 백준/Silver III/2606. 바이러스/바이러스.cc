#include <iostream>

using namespace std;

int dfs(int node);
int n, matrix[101][101] = { 0, };
int x, y,cnt;
int visited[101]={0,};

int main() {
	int pair;

	cin >> n >> pair;

	for (int i = 0; i < pair; i++) {
		scanf("%d %d", &x, &y);
		matrix[x][y] = 1;
		matrix[y][x] = 1;
		
	}

	visited[1] = 1;

	dfs(1);

	printf("%d", cnt);

	return 0;
}

int dfs(int node) {

	for (int i = 1; i <= n; i++) {
		if (matrix[node][i] == 1) {
			if (visited[i] == 0) {
				cnt++;
				visited[i] = 1;
				dfs(i);
			}
		}
	}
	return 0;

}