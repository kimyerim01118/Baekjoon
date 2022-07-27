#include<stdio.h>
int main() {
	int t;
	int k, n;
	int num[15][15];
	int sum = 0;
	scanf("%d", &t);
	for (int g = 0; g < t; g++) {
		scanf("%d %d", &k, &n);
		for (int i = 0; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 0) {
					num[i][j] = j;
				}
				else {
					for (int k = 1; k <= j; k++) {
						sum += num[i - 1][k];
					}
					num[i][j] = sum;
					sum = 0;
				}
			}
		}
		printf("%d", num[k][n]);
	}
}
