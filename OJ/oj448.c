/*************************************************************************
	> File Name: oj448.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 16时46分55秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int num[100];
    int n, flag = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    scanf("%d",&num[i]);
    int let = 0,cnt = 0;
    scanf("%d",&let);
    for(int i = 0; i < n; i++) {
        cnt++;
        if(let == num[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    printf("%d",cnt);
    else
    printf("0");
    return 0;
}
