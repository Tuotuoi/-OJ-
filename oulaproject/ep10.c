/*************************************************************************
	> File Name: ep10.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月19日 星期四 18时47分56秒
 ************************************************************************/

#include<stdio.h>
#define max_n 2000000
int a[max_n + 5]={0};
void init(){
    for(int i = 2 ; i <= max_n ;i++){
        if(!a[0]) a[++a[0]] = i;
        for(int j = 2;j<a[0];j++){
            if(a[j] * i > max_n) break;
            a[a[j] * i] = 1;
            if(i % a[j] == 0) break;
        }

    }
}
int main(){
    long long sum = 0;
    init();
    for(int i = 1; i <= max_n ; i++){
        sum += a[i];
    }
    printf("%lld\n",sum);
}
