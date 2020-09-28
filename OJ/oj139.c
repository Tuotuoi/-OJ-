/*************************************************************************
	> File Name: oj138.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 18时53分37秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n, p,cnt = 0, m;
    char a;
    scanf("%d",&n);
    a = 'A';
    m = n;
    for(int i = 1; i <= n ; i++) {
        for(int k = m - 1;k > 0; k--)
        printf(" ");
        m--;
        for(int j =  2 * i; j > 0; j--) {
            printf("%c",a);
        }
        printf("\n");
    }
    for(int i = 1; i < n; i++) {
        for(int k = 0; k < i; k++)
        printf(" ");
        for(int j = 2 * n - 2 * i; j > 0; j--){
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
