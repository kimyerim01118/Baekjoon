#include <stdio.h>


int main() {
	int n;
	int success = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int num = i;
		int temp = i;
		while (temp > 0)
		{
			num += temp % 10;
			temp /= 10;
		}
		if (num == n) {
			printf("%d ", i);
			success = 1;
			break;
		}
		else {
			success = 0;
		}
	}
	if (success == 0) {
		printf("%d",0);
	}
	return 0;
}
