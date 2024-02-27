#include <iostream>

using namespace std;

int arr[10000001] = { 0, };

int dp(int x) {

	if (x == 1) {
		return 0;
	}

	if (arr[x] != 0) {
		return arr[x];
	}

	int res = 1 + dp(x - 1);
	if (x % 3 == 0) {
		res = min(res, 1 + dp(x / 3));
	}
	if (x % 2 == 0) {
		res = min(res, 1 + dp(x / 2));
	}

	arr[x] = res;
	return res;
}

int main() {
	int n;
	cin >> n;

	cout << dp(n);

}