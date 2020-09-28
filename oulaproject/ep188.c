/*************************************************************************
	> File Name: ep188.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月19日 星期四 19时14分37秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n ,m;
    scanf("%d%d",&n,&m);
    int a[1000000]={0};
    for(int i=2 ; i<=n; i++){
        if(!a[i]) a[++a[0]] += i;
        for(int j = 2 ;j<a[0] ;j++){
            if(a[j]*i > 1000000) break;
            a[a[j] * i]=1;
            if(i % a[j] == 0)
            break;
        }
    }
    for(int k= m ;k<=n;k++){
        printf("%d ",a[k]);
    }
    return 0;
}
