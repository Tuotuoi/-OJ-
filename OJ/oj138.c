/*************************************************************************
	> File Name: oj138.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 18时53分37秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    char a;
    scanf("%d",&n);
    a = 'A';
    for(int i = 0; i < n ; i++) {
        for(int j = 2 * n - 2 * i; j > 0; j--) {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
