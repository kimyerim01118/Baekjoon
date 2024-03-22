#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, l;
	int hole;
	int cnt = 0, tapelen = 0;
	int tape[1000]={0,};

	cin >> n >> l;

	for (int i = 1; i <= n; i++) {
		cin >> hole;
		tape[hole] = 1;

	}

	for (int i = 1; i <= 1000; i++) {
		if (tape[i] == 1) {
			if (tapelen > 0) {
				tapelen--;
				continue;
			}
			else {
				cnt++;
				tapelen += l;
			}
		}
		if (tapelen > 0) {
			tapelen--;
		}
	}

	printf("%d", cnt);


}