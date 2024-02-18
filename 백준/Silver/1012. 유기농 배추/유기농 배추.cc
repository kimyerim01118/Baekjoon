#include <iostream>

using namespace std;

int visited[51][51] = { 0, };
int t, m, n, k, cnt;
int map_arr[51][51] = { 0, };

int dfs(int x, int y) {

    visited[x][y] = 1;
    if (x > 0 && visited[x - 1][y] == 0 && map_arr[x - 1][y]) {
        dfs(x - 1, y);
    }
    if (x < n + 1 && visited[x + 1][y] == 0 && map_arr[x + 1][y]) {
        dfs(x + 1, y);
    }
    if (y > 0 && visited[x][y - 1] == 0 && map_arr[x][y - 1]) {
        dfs(x, y - 1);
    }
    if (y < m + 1 && visited[x][y + 1] == 0 && map_arr[x][y + 1]) {
        dfs(x, y + 1);
    }
    return 0;

}

int main() {
    cin >> t;

    for (int i = 0; i < t; i++) {

        cin >> m >> n >> k;
        for (int j = 0; j < k; j++) {
            int x1, y1;
            scanf("%d %d", &x1, &y1);
            map_arr[y1][x1] = 1;
        }

        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                if (map_arr[j][l] == 1 && visited[j][l] == 0) {
                    dfs(j, l);
                    cnt++;
                }

            }
        }

        printf("%d\n", cnt);


        m = 0, n = 0, k = 0, cnt = 0;
        for (int j = 0; j < 51; j++) {
            for (int l = 0; l < 51; l++) {
                visited[j][l] = 0;
                map_arr[j][l] = 0;
            }
        }


    }



}