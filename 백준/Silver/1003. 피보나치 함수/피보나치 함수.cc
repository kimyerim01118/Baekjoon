#include <iostream>
using namespace std;

int zero = 0;
int one = 0;
int memoryZero[41] = { 0, };
int memoryOne[41] = { 0, };

int fibonacci(int n) {
    memoryZero[0] = 1;
    memoryZero[1] = 0;
    memoryOne[0] = 0;
    memoryOne[1] = 1;

    for (int i = 2; i <= 40; i++) {
        memoryZero[i] = memoryZero[i - 1] + memoryZero[i - 2];
        memoryOne[i] = memoryOne[i - 1] + memoryOne[i - 2];
    }

    zero = memoryZero[n];
    one = memoryOne[n];
    return 0;
 
}

int main() {
    int t, n = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        fibonacci(n);
        printf("%d %d\n",zero,one);
        zero = 0;
        one = 0;
    }

}