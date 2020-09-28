/*************************************************************************
	> File Name: oj130.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 21时11分56秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int m,n;
    double sum = 0;
    scanf("%d%d",&m,&n);
    for(int i = 0; i < n; i++) {
        sum += m;
        sum *= (1 + 0.00417);
    }
    printf("$%.2f",sum);
    return 0;
}
