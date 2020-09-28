/*************************************************************************
	> File Name: ep13_text2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 18时03分17秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 1600
int main(){
    int a;
    int sum[max_n + 5];
    int ans[max_n + 5];
   while(~ scanf("%d",&a)){
       int answ = 1;
    memset(ans , 0 ,sizeof(ans));
    ans[0]=1;
    ans[1]=1;
    for(int i = 1 ; i <= a ; i++){
        for(int j = 1;j <= ans[0];j++){
            ans[j] *= i;
        }
    for(int i = 1 ; i <= ans[0];i++){
        if(ans[i] < 10) continue;
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
        if(ans[0] == i) ans[0]++;
    }
    }
       memset(sum,0,sizeof(sum));
       sum[0]=1;
       sum[1]=1;
       for(int i = 1; i <= ans[0] ;i++){
           if(!ans[i]) continue;
           for(int j = 1 ; j<=sum[0];j++){
               sum[j] *= ans[i];
           }
           for(int i = 1;i<=sum[0];i++){
               if(sum[i] < 10) continue;
               sum[i + 1] += sum[i] /10;
               sum[i] %= 10;
               if(sum[0] == i) sum[0]++;
           }

       }
       for(int i=sum[0];i>0;i--)
       printf("%d",sum[i]);
       printf("\n");
   }
    return 0;

}
