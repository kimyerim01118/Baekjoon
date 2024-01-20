#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int d, h, w;
	int size;

	double ratio;
	double n;

	cin >> d >> h >> w;


	ratio = sqrt(pow(h, 2) + pow(w, 2));
	n = d / ratio;


	printf("%.0lf %.0lf", floor(h * n), floor(w * n));


	return 0;

}