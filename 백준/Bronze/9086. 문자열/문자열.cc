#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;
	string ans;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> ans;
		cout << ans[0] << ans[ans.length()-1]<<"\n";

	}
}

