/*************************************************************************
	> File Name: ep31.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 14时45分50秒
 ************************************************************************/

#include<stdio.h>
#define max_n 8 //有多少中货币
#define max_m 200 //拼凑多少钱

int f[2][max_m + 5];
int w[max_n + 5] = {
    1, 2, 5, 10, 20, 50, 100, 200
};
int main(){
    for(int k = 0; k < max_n; k++){
        int i = k % 2;
        f[i][0] = 1;
        for(int j = 1; j <= max_m; j++) {
            f[i][j] = 0;
             f[i][j] += f[i ^ 1][j];
           if(j >= w[k]) f[i][j] += f[i][j - w[k]];
            
        }
    }
    printf("%d\n",f[(max_n - 1) % 2][max_m]);
    return 0;
}
