#include <stdio.h>

int main()
{
    int a[101][101] = { 0, };
    int m, n,num=0,row=-1,line=0,sum=0,max=1;
    scanf("%d", &n);
    m = n;
    for (int i = 0; i < m; i++) {
        n --;
        for (int j = 0; j <=n; j++) {
            num++;
            row+=max;
            a[line][row] = num;
        }
        for (int j = 0; j <= n-1; j++) {
            line+=max;
            num++;
            a[line][row] = num;
        }
        max = max * -1;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}

