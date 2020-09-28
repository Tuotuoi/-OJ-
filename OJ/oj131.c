/*************************************************************************
	> File Name: oj131.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 21时44分25秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[105] = {0};
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int max ,min;
    max = min = arr[0];
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    printf("%d",max - min);
    return 0;
}
