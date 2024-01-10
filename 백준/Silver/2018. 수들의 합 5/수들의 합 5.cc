#include <iostream>

using namespace std;
int arr[1000000];

int main() {

	int n;

	cin >> n;



	int left = 0, right = 0, result = 0;

	int sum = 0;

	while (right <= n+1) {
		if (sum < n) {
			sum += right;
			right++;
		}
		else if (sum > n) {
			sum -= left;
			left++;


		}
		else {
			result++;
			sum += right;
			right++;


		}


	}

	printf("%d", result);

	return 0;
}