/*************************************************************************
	> File Name: oj144.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 16时42分18秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main() {
    char a[105];
    scanf("%s",a);
    int cnt;
    int d = strlen(a);
    for(int i = 0; i < d; i++) {
        if(a[i] == 'A') {
            cnt ++;
        }
    }
    printf("%d",cnt);
    return 0;
}
