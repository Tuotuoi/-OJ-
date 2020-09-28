/*************************************************************************
	> File Name: ep07-2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 19时54分09秒
 ************************************************************************/

#include<stdio.h>
#define max_n 10000
int a[max_n]={0};
void sushu(){
    int n;
    for(int i=2 ; i<max_n;i++){
        int min=0;
        if(a[i]) continue;
        a[++a[0]] = i;
        for(int j=i*2;j<max_n;j += i){
            a[j]=1;
        }
    }
    while(~scanf("%d",n)){
        printf("%d\n",a[n]);
    }
}
int main(){
    sushu();
    return 0;
}
