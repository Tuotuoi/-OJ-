/*************************************************************************
	> File Name: oj534.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 20时29分09秒
 ************************************************************************/

#include<stdio.h>

int ans ,n,num[25],check[1000] = {1};

void func(int s, int sum) {
    if(check[sum] == 0) {
        ans++;
        check[sum] = 1;
    }
    for(int i = s; i <= n; i++) {
        sum += num[i];
        func(i + 1,sum);
        sum -= num[i];
    }
}

int main() {
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&num[i]);
    }
    func(0,0);
    printf("%d",ans);
    return 0;
}
