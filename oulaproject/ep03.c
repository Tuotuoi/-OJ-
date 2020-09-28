/*************************************************************************
	> File Name: ep03.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月15日 星期日 16时32分36秒
 ************************************************************************/

#include<stdio.h>
int main(){
    long long int a=600851475143,ans;
    long long i=2;
    while(i*i <= a){
        if(a % i == 0) ans = i;//ans一定是素因子
        while(a %i == 0) a /= i;
        i+=1;

    }
    if(a>1) ans =a;  //为什么这一行是有必要的
    printf("%lld\n",ans);
    return 0;
}
