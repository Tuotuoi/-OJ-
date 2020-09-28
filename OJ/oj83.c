/*************************************************************************
	> File Name: oj83.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月11日 星期三 20时10分52秒
 ************************************************************************/

#include<stdio.h>
int num[50], cnt;

void p() {
    for(int i = 0; i < cnt; i++) {
        if(i) printf("+");
        printf("%d",num[i]);
    }
    printf("\n");
}

int func(int s, int left_num, int left_cnt) {
    if(left_cnt == 0) {
        if (left_num == 0) {
            p();
            return 1;
        }
        return 0;
    }
    int ans = 0;
    for(int i = s; i <= left_num; i++) {
        num[cnt++] = i;
        ans += func(i, left_num - i, left_cnt - 1);
        cnt --;
    }
    return ans;
}

int main() {
    int n, m;
    scanf("%d%d",&n, &m);
    return 0;
}
