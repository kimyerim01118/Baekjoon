#include <iostream>

using namespace std;

int n, m;
int length = 0;
int visited[9] = {0,};
int ans[9];

bool promising(int n) {
		if (visited[n] == 1) {
			return false;
		}
	return true;

}

void dfs(int start) {
	if (start == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		ans[start] = i;
		if (promising(i)) {
			visited[i] = 1;
			dfs(start + 1);
			visited[i] = 0;
		}
	}


}

int main() {

	cin >> n >> m;

	dfs(0);


}