/*************************************************************************
	> File Name: ep06.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月15日 星期日 18时30分44秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int sum1 = 0, sum2 = 0;
    for(int i=1 ; i<=100 ;i++){
        sum1 += i;
        sum2 += i*i;
    }
    printf("%d\n",sum1*sum1-sum2);
    return 0;
}
