/*************************************************************************
	> File Name: ep01.c
	> Author:ljx 
	> Mail: 
	> Created Time: 2019年12月15日 星期日 14时51分43秒
 ************************************************************************/

#include<stdio.h>
int is_value(int n){
    if(n%3 == 0 || n%5 == 0) return 1;
    return 0;
}
int main(){
    int sum=0;
    for(int i=0;i<1000;i++)
    {
        if(!is_value(i)) continue;
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
