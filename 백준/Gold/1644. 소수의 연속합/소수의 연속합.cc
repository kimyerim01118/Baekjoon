#include <iostream>
#include<cmath>
using namespace std;

int main() {
	//4, 000, 000
	int number_arr[4000001] = { 0, };
	int prime_arr[4000001] = { 0, };
	int n;
	int prime_index = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		number_arr[i] = i;
	}

	for (int i = 2; i*i<=n; i++) {
		if (number_arr[i] == 0) {
			continue;
		}
		else {
			for (int j = i * i; j <= n; j += i) {
				number_arr[j] = 0;
			}
		}
	}

	for (int i = 0; i <= n; i++) {
		if (number_arr[i] != 0) {
			prime_arr[prime_index] = number_arr[i];
			prime_index++;
		}
	}

	int left = 0, right = 0, sum = 0, result = 0;

	while (right <= prime_index) {
		if (sum < n) {
			sum += prime_arr[right];
			right++;
		}
		else if (sum > n) {
			sum -= prime_arr[left];
			left++;
		}
		else {
			result++;
			sum += prime_arr[right];
			right++;
		}
	}


	printf("%d", result);

}