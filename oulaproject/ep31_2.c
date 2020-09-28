/*************************************************************************
	> File Name: ep31.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 14时45分50秒
 ************************************************************************/

#include<stdio.h>
#define max_n 8 //有多少中货币
#define max_m 200 //拼凑多少钱

int f[max_m + 5] = {0};
int w[max_n + 5] = {
    1, 2, 5, 10, 20, 50, 100, 200
};
int main(){
    f[0] = 1;
    for(int i = 0; i < max_n; i++){
        for(int j = 1; j <= max_m; j++) { 
           if(j >= w[i]) f[j] += f[j - w[i]];
            
        }
    }
    printf("%d\n",f[max_m]);
    return 0;
}
