/*************************************************************************
	> File Name: ep47.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月29日 星期日 18时09分00秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;
#define max_n 1000000
int prime[max_n + 5] = {0};

void init() { //找当前素数有几个素因子
    for(int i =2; i <= max_n; i++) {
        if(prime[i]) continue;
        for(int j = i; j <= max_n; j += i) {
            prime[j] += 1;
        }
    }
    for(int i = 1; i <=100; i++)
    printf("%d = %d\n", i , prime[i]);
    return ;
}
int main() {
    init();
    int ans = 0;
    for(int i = 1000; i < max_n; i++) {
        int flag = 1;
        for(int j = 0; j < 4 && flag; j++) {
           flag =  (prime[i + j] == 4);
        }
        if (!flag) continue;
        ans = i;
        break;
    }
    printf("%d\n",ans);
    return 0;
}
