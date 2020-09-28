/*************************************************************************
	> File Name: oj235.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 19时07分29秒
 ************************************************************************/

#include<stdio.h>
int n, num[15], cnt, mark[15];


void func(int s) {
    if(s == 0) {
        for(int i = 0; i < cnt; i++) {
            if(i) printf(" ");
            printf("%d",num[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if(mark[i] == 0) {
            mark[i] = 1;
            num[cnt++] = i;
            func(s - 1);
            cnt--;
            mark[i] = 0;
        } 
    }
}

int main() {
    scanf("%d",&n);
    func(n);
    return 0;
}
