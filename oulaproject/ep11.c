/*************************************************************************
	> File Name: ep11.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月19日 星期四 20时01分17秒
 ************************************************************************/

#include<stdio.h>
#define max_n 20

int grid[max_n + 5][max_n + 5];
int dir[4][2] = {
    {-1 , -1},
    {-1 , 0},
    {-1 , 1},
    {0 , 1}
};

int calc(int x, int y){ //x，y是中心位置
    int ans = 0;
    for(int k = 0; k< 4; k++){ //k是四个方向，左下，左，左上，上
        int p = 1;   //p是这次搜索的某方向上四个数相乘的结果
        for(int step = 0; step < 4; step++){//step是现在这个方向的后step个数的位置
            int dx = x + dir[k][0] * step;  //dx ，dy是当前位置
            int dy = y + dir[k][1] * step;
            if(dx < 0 || dx >= max_n) break;
            if(dy < 0 || dy >= max_n) break;
            p *= grid[dx][dy];
        }
        if (p > ans) ans = p;
    }
    return ans;
}
int main(){
    for(int i= 0;i < max_n; i ++ ){
        for(int j =0; j < max_n ;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    int ans = 0;
        for(int i = 0;i < max_n ; i++){
            for(int j = 0;j < max_n;j ++){
                int p = calc(i ,j);
                if(p > ans) ans = p;
            }
        }
    printf("%d\n",ans);
    return 0; 
}
