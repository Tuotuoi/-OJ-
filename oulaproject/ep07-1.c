/*************************************************************************
	> File Name: ep07-1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 19时05分56秒
 ************************************************************************/

#include<stdio.h>
#define max_n 200000
int a[max_n]={0};

void init(){
    int min=0;
    for(int i=2; i <=max_n ; i++){
        if(a[i]) continue;
        for(int j = i;j <= max_n;j += i){
            if(a[i])continue;
            a[j]=i;//最小素数存放

        }
    }
}
int main(){
    init();
    int n;
    while(~scanf("%d",&n))
        printf("%d",a[n]);
    return 0;
}
