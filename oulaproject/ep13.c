/*************************************************************************
	> File Name: ep13.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 15时50分14秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define max_n 52
char a[max_n + 5]= {0};
int ans[max_n + 5] = {0};
int main(){
    while(~scanf("%s",a)){
        int len = strlen(a);
        if(len > ans[0]) ans[0] = len;
        for(int i=0 ; i < len ; i++){
            ans[len - i] += a[i] - '0'; 
        }
        for(int i = 1 ;i <= ans[0];i++){
            if(ans[i] < 10) continue;
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
            ans[0] += (i == ans[0]);
        }
    }
    for(int i = ans[0]; i>ans[0]-10;i--)
    printf("%d",ans[i]);
    printf("\n");
    return 0;
}
