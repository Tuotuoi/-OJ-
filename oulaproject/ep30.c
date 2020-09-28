/*************************************************************************
	> File Name: ep30.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月15日 星期日 19时36分27秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 2903040  //9!*8
int keep[10]={1,1};  

void jiechen(){
    int temp=1;
    for(int i=2 ; i <=9; i++)
    {
        keep[i]= i * keep[i-1];
    }
    return ;
}
int is_val(int n){
    int x=n,temp=0,a;
    while(x){
        a=x%10;
        temp += keep[a];
        x /= 10;
    }
    return temp == n;
}
int main(){
    jiechen();
    long long sum = 0;
    for(int i=3 ; i <= max_n; i++){
        if(is_val(i)) sum += i;
    }
    printf("%lld\n",sum);
    return 0;
}
