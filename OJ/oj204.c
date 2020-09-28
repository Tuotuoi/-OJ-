/*************************************************************************
	> File Name: oj204.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 20时59分09秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int high[30][30];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d",&high[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n",high[i][i]);
    }
    return 0;
}
