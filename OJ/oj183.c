/*************************************************************************
	> File Name: oj183.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 23时24分59秒
 ************************************************************************/

#include<stdio.h>
int init(int x) {
    if(x <= 0) return 0;
    if(x == 1) return 1;
    if(x > 1 && x % 2 == 0) return 3 * init(x >> 1) - 1;
    if(x > 1 && x % 2 != 0) return 3 * init((x + 1) >> 1) - 1;
}
int main() {
    int x;
    scanf("%d",&x);
   printf("%d" ,init(x));
    return 0;
}
