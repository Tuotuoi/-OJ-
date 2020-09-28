/*************************************************************************
	> File Name: ep13.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 15时50分14秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 1000000
char str[max_n + 5]= {0};
char ans[max_n + 5] = {0};
int main(){
    int a ,b;
    scanf("%d%d",&a,&b);
    int len=0;
    ans[0]=1;
    ans[1]=1;
        for(int j = 1 ; j <= b ;j++){
            for(int i = 1 ; i<= ans[0];i++)
                ans[i] *= a ;
        
        for(int i = 1 ;i <= strlen(ans);i++){
            if(ans[i] < 10) continue;
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
            if(ans[0] == i)
            ans[0]++;
        }
        }
    for(int i = ans[0]; i>0;i--)
    printf("%d",ans[i]);
    printf("\n");
    return 0;
}
