/*************************************************************************
	> File Name: oj404.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 19时26分10秒
 ************************************************************************/

#include<stdio.h>

int n, m, k, sx, sy,ans = 1;
char mmap[3005][3005];
int dir[4][2] = {0,1,1,0,0,-1,-1,0};
int check[3005][3005];

void func(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
    }

}

int main () {
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 1; i <= n; i++) {
        scanf("%s",&mmap[i][1]);
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if (check[i][j] == 0) {

            }
        }
    }
    return 0;
}
