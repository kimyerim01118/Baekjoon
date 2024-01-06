#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int n = 0;
int m = 0;
int hd = 0;
vector<char> answer;

void dna_counter(vector<char> dna) {

	char arr[4] = { 'A', 'C', 'G', 'T' };

	vector<int> dna_cnt(4,0);
	int index = 0;

	for (int i = 0; i < dna.size(); i++) {
		if (dna[i] == 'A') {
			dna_cnt[0]+=1;
		}
		else if (dna[i] == 'C') {
			dna_cnt[1] += 1;
		}
		else if (dna[i] == 'G') {
			dna_cnt[2] += 1;
		}
		else {
			dna_cnt[3] += 1;
		}
	}

	index = max_element(dna_cnt.begin(), dna_cnt.end()) - dna_cnt.begin();
	hd += n - dna_cnt[index];
	answer.push_back(arr[index]);


}

int main() {

	cin >> n >> m;

	string dna;

	vector<string> dna_arr(n);
	

	for (int i = 0; i < n; i++) {
		cin >> dna_arr[i];
	}

	for (int i = 0; i < m; i++) {
		vector<char> dna_digit;
		for (int j = 0; j < n; j++) {
			dna_digit.push_back(dna_arr[j][i]);
		}
		dna_counter(dna_digit);
	}

	for (int i = 0; i < m; i++) {
		cout << answer[i];
	}
	cout << "\n" << hd;


	return 0;
}

// 다 같으면 같은걸로, 하나가 다르면 하나 카운트, 나머지껄로 설정, 