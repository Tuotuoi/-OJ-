/*************************************************************************
	> File Name: 54_1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 04时40分02秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 1600
int ans[max_n + 5];
int sum[max_n + 5];
int main(){
    int x;
    while(~scanf("%d",&x)) {
        memset(ans,0,sizeof(ans));
        ans[0]=1;
        ans[1]=1;
        for(int i = 1 ; i <= x; i++){
            for(int j = 1; j <= ans[0]; j++){
                ans[j] *= i;
            }
            for(int k = 1 ; k <= ans[0]; k++){
                if(ans[k] < 10) continue;
                ans[k + 1] += ans[k] / 10;
                ans[k] %= 10;
                if(k == ans[0]) ans[0]++;
            }
        }
        int sum = 0;
        for(int i =1; i<= ans[0];i++)
        sum += ans[i];
        printf("%d",sum);
        printf("\n");
    }
    return 0;
}
