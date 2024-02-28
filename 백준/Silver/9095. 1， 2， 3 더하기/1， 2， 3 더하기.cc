#include <iostream>

using namespace std;

int main() {

	int t, n;
	int arr[11];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		for (int j = 3; j < n; j++) {
			arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
		}

		printf("%d\n", arr[n - 1]);

	}

}