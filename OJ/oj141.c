/*************************************************************************
	> File Name: oj141.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 10时45分14秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char a = 'A';
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int j = i; j <= n; j++) {
            printf("%c",a - '0' + j + '0');
        }
        for(int j = n - 1; j >= i; j--) {
            printf("%c",a - '0' + j + '0');
        }
        printf("\n");
    }

    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int j = i; j <= n; j++) {
            printf("%c",a - '0' + j + '0');
        }
        for(int j = n - 1; j >= i; j--) {
            printf("%c",a - '0' + j + '0');
        }
        if(i > 0)
        printf("\n");
    }
}
