/*************************************************************************
	> File Name: ep21-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月29日 星期日 19时14分57秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void init () {
    for(int i = 2; i <= max_n; i++) {
        if(!prime[i]){
            prime[++prime[0]] = i;
            f[i] = i + 1; //因子和
            cnt[i] = 1; // 有几个因子
        }
        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * i > max_n) break;
            prime[prime[j] *i] = 1;
            if(i % prime[j] == 0) {
                f[i * prime[j]] = f[i] * ((pow(prime[j],cnt[i] + 2) - 1) /(pow(prime[j],cnt[i] + 1) -1));
                cnt[prime[j] * i] = cnt[i] + 1;
                break;
            }else {
                f[i * prime[j]] = f[i] * f[prime[j]];
                cnt[i * prime[j]] = 1;
            }
        }
    }
    return ;
}
int main() {
    long long ans = 0;
    init();
    for(int i = 1;i <= max_n; i++) {
        if(f[i] >= f[i - 1]) ans = f[i];
    }
    printf("%lld\n",ans);
    return 0;

}
