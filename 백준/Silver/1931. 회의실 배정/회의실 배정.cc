#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	vector<pair<int, int>> p;
	int a, b;	
	int cnt = 1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		p.push_back(make_pair(b, a));
	}

	sort(p.begin(), p.end());

	int time = p[0].first;
	for (int i = 1; i < n; i++) {

		if (time <= p[i].second) {
			cnt++;
			time = p[i].first;
		}
	}

	printf("%d", cnt);


}

