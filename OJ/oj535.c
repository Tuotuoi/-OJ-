/*************************************************************************
	> File Name: oj535.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 18时14分28秒
 ************************************************************************/

#include<stdio.h>

int n,m, sx, sy, ans = 1;
char mmap[50][50];
int dir[4][2] = {0,1,1,0,0,-1,-1,0};

void func(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if(mmap[tx][ty] == '.') {
            mmap[tx][ty] == 0;
            ans ++;
            func(tx,ty);
        }
    }
}

int main() {
    scanf("%d%d",&m,&n);
    for(int i = 1; i <= n; i++) {
        for(int j= 1; j <= m; j++) {
            scanf("%c",&mmap[i][j]);
            if(mmap[i][j] == '@') {
                sx = i;
                sy = j;
            }
        }
    }
    func(sx,sy);
    printf("%d\n",ans);

    return 0;
}
