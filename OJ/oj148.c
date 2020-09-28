/*************************************************************************
	> File Name: oj148.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 20时27分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%s",a);
    int d = strlen(a);
    char b[100];
    for(int i = d - 1; i > 0; i--) {
        b[i] = a[d - i];
    }
    printf("%s",b); 
    return 0;
}
