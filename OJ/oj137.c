/*************************************************************************
	> File Name: oj137.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 22时12分14秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    char a = 'A';
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        for(int j = n - i; j > 0; j--) {
            printf("%c",a);
            a = a - '0' + 1;
            a = a + '0';
        }
        printf("\n");
    }
    return 0;
}
