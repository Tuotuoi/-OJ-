/*************************************************************************
	> File Name: oj181.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 22时48分23秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char a[1000];
    scanf("%s",a);
    int len = strlen(a);
    for(int i = 0; i < len; i++) {
        if(islower(a[i])) a[i] = a[i] - '0' - 32 +'0';
        else if(isupper(a[i])) a[i] = a[i] - '0' + 32 + '0';
    }
    printf("%s",a);
    return 0;
}
