/*************************************************************************
	> File Name: oj235.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 19时07分29秒
 ************************************************************************/

#include<stdio.h>
int n, num[15] , cnt, m;

void p() {
    if(cnt == m) {
    for(int i = 0; i < cnt; i++) {
        if (i) printf(" ");
        printf("%d",num[i]);
    }
    printf("\n");
    }
    else return ;
}

void func(int s) {
    for (int i = s; i <= n; i++) {
        num[cnt] = i;
        cnt++;
        p();
        func(i + 1);
        cnt --;
    }
}
int main() {
    scanf("%d%d",&n,&m);
    func(1);
    return 0;
}
