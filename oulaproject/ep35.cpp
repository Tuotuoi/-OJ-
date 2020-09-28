/*************************************************************************
	> File Name: ep35.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 18时52分32秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {1,1,0};
void init(){
    for(int i = 2; i < max_n; i++){
        if(!is_prime[i]) prime[++prime[0]] = i; 
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n) break;
            is_prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return ;
}
int is_val(int n) {
    int x = n,z=n;
    int cnt = floor(log10(n)) + 1;
    int tmp = (int)pow(10,cnt-1);
    for(int i = 1; i < cnt ; i++){
        z = (z % 10) * tmp + z / 10;
        if(is_prime[z]) return 0;
        }
    return 1;
}
int main(){
    init();
    int cnt = 0;
    for(int i = 1 ; i <= prime[0]; i++) {
        if(!is_val(prime[i])) continue;
        cnt ++;
    }
    printf("%d\n",cnt);
    return 0;
}
