/*************************************************************************
	> File Name: ep02slove.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月15日 星期日 15时52分54秒
 ************************************************************************/

#include<stdio.h>
#define N 4000000

int main(){
    int sum=0,n=0;
    int a=0,b=1;
    while(a+b <= N){
        b = a + b;
        a = b - a;
        if(b & 1) continue;
        sum += b;
    }
    printf("%d\n",sum);
    return 0;
}
