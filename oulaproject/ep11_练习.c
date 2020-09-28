/*************************************************************************
	> File Name: ep11_练习.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月21日 星期六 11时14分55秒
 ************************************************************************/

#include<stdio.h>
#define max_n 20
int grid[max_n + 5][max_n + 5];
int dir[4][2]={
    {-1,-1},
    {-1 ,0},
    {-1,1},
    {0,1}
};
int calc(int x , int y){
    int ans = 0;
    for(int k = 0 ; k < 4; k++){
        int p = 1;
        for(int step = 0; step < 4 ; step++){
            int dx = x + dir[k][0] * step;
            int dy = y + dir[k][1] * step;
            if(dx < 0 || dx >= max_n) break;
            if(dy < 0 || dy >= max_n) break;
            p *= grid[dx][dy];
        }
        if(p > ans) ans = p;
    }
    return ans;
}
int main(){
    int ans=0;
    for(int i =0 ; i < max_n ; i++){
        for(int j = 0 ; j < max_n ; j++){
            scanf("%d",&grid[i][j]);
        }
    }
    for(int x = 0; x < max_n ;x++){
        for(int y = 0; y < max_n; y++){
            int p=calc(x , y);
            if(p > ans) ans = p;
        }
    }
    printf("%d\n",ans);
    return 0;
}
