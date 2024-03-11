// 단지번호 붙이기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int map_arr[25][25] = { 0, };
int visited_arr[25][25] = { 0, };
int n;

int point = 0;

int sum = 0;

vector<int> answer;


bool dfs(int x, int y) {

	if (map_arr[x][y] == 0) {
		visited_arr[x][y] = 1;
		return false;
	}

	if (visited_arr[x][y] == 1) {
		return false;
	}
	sum++;
	visited_arr[x][y] = 1;

	if (x < n - 1) {
		dfs(x + 1, y);
	}
	if (y < n - 1) {
		dfs(x, y+1);
	}
	if (x > 0) {
		dfs(x-1, y);
	}
	if (y > 0) {
		dfs(x, y-1);
	}


	return false;
	
	
}

int main() {
	int point = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map_arr[i][j]);

		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map_arr[i][j] == 1 && visited_arr[i][j] == 0) {
				point++;
				dfs(i, j);
				answer.push_back(sum);
				sum = 0;
			}
			

		}
	}

	sort(answer.begin(), answer.end());

	printf("%d\n", point);

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << "\n";

}