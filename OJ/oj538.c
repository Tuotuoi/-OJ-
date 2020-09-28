/*************************************************************************
	> File Name: oj538.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月25日 星期三 18时14分11秒
 ************************************************************************/

#include<stdio.h>
int n,num[25][25],flag,check[25];


void func(int x) {
    if (flag == 1) {
        printf("-");
    }
    flag = 1;
    printf("%d",x);
    for(int i = 1; i <= n;i++) {
        if (num[x][i] == 1 && check[i] == 0) {
            check[i] = 1;
            func(i);
        }
    }
}

int main() {
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n;j++) {
            scanf("%d",&num[i][j]);
        }
    }
    for(int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            check[i] = 1;
            func(i);
        }
    }


    return 0;
}
