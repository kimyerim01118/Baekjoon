#include <iostream>

using namespace std;


int n;

int map[3][3];

int dfs(int x, int y);

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			scanf("%d", &map[i][j]);
		}
	}

	dfs(0, 0);
	printf("Hing");

	return 0;
}


int dfs(int x, int y) {
	if (x >= n || y >= n) {
		return 0;
	}
	else if (map[x][y] == -1) {
		printf("HaruHaru");
		exit(0);
	}
	else if (map[x][y] == 0) {
		return 0;
	}
	else {
		if (x + map[x][y] < n ) {
			dfs(x + map[x][y], y);
		}
		if (y + map[x][y] < n) {
			dfs(x, y + map[x][y]);
		}
	}
	return 1;
}
