/*************************************************************************
	> File Name: ep14.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 14时09分34秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000

long long get_len(long long n){
    if(n == 1) return 1;
    //if(n < 0) printf("0\n");判断爆栈
    if(n % 2 == 0) return get_len(n / 2) + 1;//
    else return get_len(3 * n +1) +1;
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
