/*************************************************************************
	> File Name: oj240.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 18时04分45秒
 ************************************************************************/

char ans[2200][2200];
int num[10] = {0, 1, 3, 9, 27, 81, 243, 729, 2187};

void func(int x, int y, int n) {
    if(n == 1) {
        ans[x][y] = 'x';
        return ;
    }
    func(x,y, n - 1);
    func(x, y + num[n] / 3 * 2, n - 1);
    func(x + num[n] / 3 * 2,y, n - 1);
    func(x + num[n] / 3 * 2, y + num[n]/3*2, n - 1);
    func(x + num[n] / 3, y + num[n] / 3, n - 1);
}
#include<stdio.h>
int main() {
    int n;
    func(1, 1, 7);
    while(scanf("%d", &n)) {
        if(n == -1) break;
        for(int i = 1; i <= num[n]; i++) {
            for(int j = 1; j <= num[n]; j++) {
                if(ans[i][j] == 'x') printf("X");
                else printf(" ");
            }
            printf("\n");
        }
        printf("-\n");
    }
    return 0;
}
