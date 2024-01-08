#include <iostream>

using namespace std;

int main() {

	int n, m;
	int start, end;
	int temp = 0;

	int arr[100001] = {0,};
	int ps_arr[100001] ={0,};

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		temp += arr[i];
		ps_arr[i] = temp;

	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &start, &end);
		printf("%d\n", ps_arr[end] - ps_arr[start - 1]);

	}



	return 0;
}
