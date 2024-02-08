#include <iostream>

using namespace std;

int main() {

	int stateX = 0;
	int stateY = 0;
	

	int x1, y1, x2, y2;

	int x3, y3, x4, y4;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;


	if (x2 == x3 || x1 == x4) {
		stateX = 1; // 맞닿음 1, 겹침 2 포함됨 3
	}
	else if (x2 > x3) {
		if (x2 >= x4 && x1 <= x3) {
			stateX = 3;
		}
		else if (x2 <= x4 && x1 >= x3) {
			stateX = 3;
		}
		else {
			stateX = 2;
		}

	}

	if (y2 == y3 || y1 == y4) {
		stateY = 1; // 맞닿음 1, 겹침 2 포함됨 3
	}
	else if (y2 > y3) {
		if (y2 >= y4 && y1 <= y3) {
			stateY = 3;
		}
		else if (y2 <= y4 && y1 >= y3) {
			stateY = 3;
		}
		else {
			stateY = 2;
		}

	}

	if (stateX == 0 || stateY == 0) { // 둘중 하나라도 안만난다면?
		printf("NULL");
	}
	else if (stateX == 1 || stateY == 1) { // 하나는 맞닿는 경우
		if (stateX == stateY) { // 둘 다 맞닿으면 POINT
			printf("POINT");
		}
		else {
			printf("LINE");
		}
	}
	else if (stateX + stateY >=4) {
		printf("FACE");
	}

}