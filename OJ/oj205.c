/*************************************************************************
	> File Name: oj205.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 00时10分24秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int high[30][30];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d",&high[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        double ave = 0;
        for(int j = 0; j < m; j++) {
            ave += high[i][j];
        }
        ave /= m;
        printf("%.6f",ave);
        if(i < n) printf("\n");
    }
    return 0;
}
