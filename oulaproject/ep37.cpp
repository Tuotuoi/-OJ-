/*************************************************************************
	> File Name: ep37.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 19时58分37秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 1000000
int is_prime[max_n + 5] = { 1, 1, 0 };
int prime[max_n + 5]={0};

void init(){
    for(int i = 2; i <= max_n; i++) {
        if(!is_prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n) break;
            is_prime[prime[j] * i] = 1;
            if(prime[j] % i == 0) break;
        }
    }
    return ;
}
int is_val(int n){
    int digit = floor(log10(n)) + 1;
    int tmp = n;
    for(int i = 1 ; i < digit ;i++){
        tmp /= 10;
        if(is_prime[tmp]) return 0;
    }
    int h =(int)pow(10,digit-1);
    int ans = n;
    for(int i = 1; i < digit ;i++){
        ans %= h;
        if(is_prime[ans]) return 0;
        h /= 10;
    }
    return 1;
}
int main() {
    init();
    int sum = 0;
    for(int i = 1 ; i <= prime[0]; i++ ) {
        if(prime[i] < 10) continue;
        if(!is_val(i)) continue;
        sum += prime[i];
    }
    printf("%d\n",sum);
    return 0;
}

