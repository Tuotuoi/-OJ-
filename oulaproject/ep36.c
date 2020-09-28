/*************************************************************************
	> File Name: ep36.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月15日 星期日 20时46分57秒
 ************************************************************************/

#include<stdio.h>
int is_val(int n){
    int x=n,temp;
    int b[1000000];
    while(x){
        int a=x % 10;
        temp += a*10;
        x /= 10;
    }
    return temp == n;
}
int main(){
    long long int a=0;
    for(int i=1;i<1000000;i++){
        if(is_val(i)) a += i;
    }
    printf("%ld\n",a);
    return 0;
}
