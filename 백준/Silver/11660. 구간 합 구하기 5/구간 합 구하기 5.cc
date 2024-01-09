#include <iostream>

using namespace std;

int main() {

	int n, m; // n = 표의 크기, m = 연산 횟수

	scanf("%d %d", &n, &m);

	int arr[1025][1025];
	int ps_arr[1025][1025] = {0,};

	int x1,x2,y1,y2;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &arr[i][j]);
			ps_arr[i][j] = ps_arr[i - 1][j] + ps_arr[i][j - 1] - ps_arr[i - 1][j - 1] + arr[i][j];
		}
	}

	for (int i = 0; i < m; i++) {

		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		printf("%d\n", ps_arr[x2][y2] - ps_arr[x2][y1 - 1] - ps_arr[x1 - 1][y2] + ps_arr[x1 - 1][y1 - 1]);

	}


}
