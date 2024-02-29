#include <iostream>

using namespace std;

int main() {
	long long int pn[91];

	int n;

	cin >> n;
	pn[0] = 1;
	pn[1] = 1;


	for (int i = 2; i <= n; i++) {
		pn[i] = pn[i - 1] + pn[i - 2];

	}

	printf("%lld", pn[n-1]);
}