/*************************************************************************
	> File Name: oj204.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 20时59分09秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int high[202][202];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d",&high[i][j]);
        }
    }

    for(int j = 0; j < m ; j++) {
        for(int i = n - 1; i >= 0; i--) {
            printf("%d",high[i][j]);
            if(i > 0)
            printf(" ");
        }
        if(j < m - 1)
        printf("\n");
    }
    return 0;
}
