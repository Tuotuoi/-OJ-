/*************************************************************************
	> File Name: oj536.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 18时45分19秒
 ************************************************************************/

#include<stdio.h>
int n,m,mmax,ans;
char mmap[105][105];
int dir[4][2] = {0,1,1,0,0,-1,-1,0};

int max (int a, int b) {
    return a > b ? a : b;
}

void func(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if(mmap[tx][ty] == '1') {
            ans++;
            mmap[tx][ty] = '0';
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
            if(mmap[i][j] == '1') {
                mmap[i][j] = '0';
                ans = 1;
                func(i,j);
                mmax = max(mmax,ans);
            }
        }
    }
    printf("%d\n",mmax);
    return 0;
}
