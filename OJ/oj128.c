/*************************************************************************
	> File Name: oj128.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 21时06分50秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int m,n;
    double sum = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&m);
        sum += m;
    }
    printf("%.2f",sum / n);
}
