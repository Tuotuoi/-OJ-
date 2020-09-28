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
void init(){
    for(int i = 2; i < max_n; i++){
        if(!prime[i]) prime[++prime[0]]; 
        for(int j = 2; j < prime[0]; j++){
            if(prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if(prime[j] == i) break;
        }
    }
}
int is_val(int n) {
    int x = n,z=n / 10;
    int m,p;
    int cnt = 0;
    while(x) {
        cnt ++;
        x /= 10;
    }
    int tmp = pow(10,cnt-1);
    while(cnt --){
        m =n % 10;
        m = m*tmp + z;
    for(int i = 2; i <max_n ; i++){
    if(prime[i] == n && prime[i] == m) return 1;
        m /= 10;
    }
        return 0;

}
}
int main(){
    init();
    int cnt = 0;
    for(int i = 2 ; i <= max_n; i++) {
        if(!is_val(i)) continue;
        cnt ++;
    }
    printf("%d\n",cnt);
    return 0;
}
