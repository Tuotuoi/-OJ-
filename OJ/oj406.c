/*************************************************************************
	> File Name: oj536.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 18时45分19秒
 ************************************************************************/

#include<stdio.h>
int n,m,mmax,ans;
char mmap[5000][5000];
int dir[8][2] = {0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1};

int max (int a, int b) {
    return a > b ? a : b;
}

void func(int x, int y) {
    for(int i = 0; i < 8; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if(mmap[tx][ty] == '#') {
            mmap[tx][ty] = '.';
            func(tx,ty);
        }
    }
}

int main () {
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n; i++) {
        scanf("%s",&mmap[i][1]);
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(mmap[i][j] == '#') {
                mmap[i][j] = '.';
                ans ++;
                func(i,j);
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
