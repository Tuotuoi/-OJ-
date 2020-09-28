/*************************************************************************
	> File Name: ep45.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月24日 星期二 19时44分06秒
 ************************************************************************/

#include<stdio.h>
typedef long long int1;
int1 hexagonal (int1 n) {
    return n * (2 * n - 1);
}
int1 penagonal(int1 n) {
    return n * (3 * n - 1) / 2;
}
int1 binary_search(int1 (*func)(int1) , int1 n, int1 x) {
    int1 l = 0, r = n, mid;
    while(l <= r) {
        mid = (l + r) >> 1;
        if(func(mid) == x) return mid;
        if(func(mid) > x) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
int main() {
    int1 n = 144;
    while(binary_search(penagonal, 2 * n, hexagonal(n)) == -1) n++;
    printf("%lld\n",hexagonal(n));
}
