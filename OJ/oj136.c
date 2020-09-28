/*************************************************************************
	> File Name: oj136.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 21时53分13秒
 ************************************************************************/

#include<stdio.h>
#define max_n 200
int _7arr[max_n + 5] = {0};
int is7arr[max_n + 5] = {0};
void init() {
    for(int i = 1; i <= max_n; i++) {
        _7arr[i] = i * 7;
        
    }
}
int main() {
    init();
    int n;
    scanf("%d",&n);
    for(int i = 1; _7arr[i] <= n; i++) {
         printf("%d\n",_7arr[i]);
    }
    return 0;
}
