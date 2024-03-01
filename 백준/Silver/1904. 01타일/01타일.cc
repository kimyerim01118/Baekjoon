#include <iostream>

using namespace std;

int main() {

	int pn[1000000];

	long long int n;

		cin >> n;
		pn[1] = 1;
		pn[2] = 2;

		for (int i = 3; i <= n; i++) {
			pn[i] = (pn[i - 1] + pn[i - 2]) % 15746;

		}

		printf("%d",pn[n] % 15746);


}