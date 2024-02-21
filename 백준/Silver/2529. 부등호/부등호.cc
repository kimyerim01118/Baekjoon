#include <iostream>

using namespace std;

int k;
int ans[11]={0,};
char fomula[9];
long long int number;

int min_arr[10];
int max_arr[10];
int cnt = k;

int visited[9];
bool promising(int i) { // 0
		if (i == 0) {
			return true;
		}
		for (int k = 0; k < i; k++) {
			if (ans[i] == ans[k]) {
				return false;
			}
		}

	if (fomula[i - 1] == '<') {
		if (ans[i - 1] < ans[i]) {
			return true;
		}
		else {
			return false;
		}
	}
	if (fomula[i - 1] == '>') {
		if (ans[i - 1] > ans[i]) {
			return true;
		}
		else {
			return false;
		}


	}
}

void makeNumber() {

	if (cnt == 0) {
		for (int i = 0; i <= 9; i++) {
			min_arr[i] = ans[i];

		}

	}
	for (int i = 0; i <= 9; i++) {
		max_arr[i] = ans[i];
	}

}
void dfs(int i) {

	if (i == k+1) {
		makeNumber();
		cnt++;
		number = 0;
	}
	for (int j = 0; j <= 9; j++) {
		ans[i] = j;
		if (promising(i)) {
			dfs(i + 1);
		}

	}
}


int main() {

	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> fomula[i];
	}
	dfs(0);
	for (int i = 0; i <= k; i++) {
		printf("%d", max_arr[i]);

	}
	printf("\n");
	for (int i = 0; i <= k; i++) {
		printf("%d", min_arr[i]);

	}

}

