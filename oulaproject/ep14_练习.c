/*************************************************************************
	> File Name: ep14.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 14时09分34秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
int keep[max_n + 5] = {0};

long long get_len(long long n){
    if(n == 1) return 1;
    if(n <= max_n && keep[n]) return keep[n];
    long long ret = 0;
    if(!(n & 1)) ret = get_len(n >> 1) + 1;
    else ret = get_len(3 * n +1) +1;
    if(n <= max_n) keep[n] = ret;
    return ret;
}
int main(){
    long long ans = 0,len = 0;
    for(long long i = 1 ; i <= max_n ;i++){
        long long temp = get_len(i);
        if(temp > len){
            ans = i;
            len = temp;
        } 
    }
    printf("%lld" , ans);

    return 0;
}
