#include <iostream>

using namespace std;

int arr[15];
int n;
int queen;
int result = 0;
bool promising(int node);

void dfs(int q) {

	if (q == n) {
		result+=1;
	}
	else {
		for (int i = 0; i < n; i++) {
			arr[q] = i;
			if (promising(q))
				dfs(q + 1);
		}
	}


	

}

bool promising(int node) {
	for (int i = 0; i < node; i++) {
		if (arr[i] == arr[node]) {
			return false;
		}
		else if (abs(arr[i]-arr[node]) == (node-i)) {
			return false;
		}
	}
	return true;
	

}


int main() {

	cin >> n;

	dfs(0);


	cout << result;




}