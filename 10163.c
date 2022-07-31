#include <stdio.h>
int main() {
	int n;
	int a, b,c,d,e=0;
	int cnt = 0;
	int num[1001][1001] = { 0, };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &a, &b,&c,&d);
		for (int j = a; j < a + c; j++) {
			for (int k = b; k < b + d; k++) {
				num[j][k] = i;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 1001; j++) {
			for (int k = 0; k < 1001; k++) {
				if (num[j][k] == i) {
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
}
