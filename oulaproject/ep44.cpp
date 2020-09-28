/*************************************************************************
	> File Name: ep44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月24日 星期二 18时59分33秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

typedef long long int1;
int1 pentagonal(int1 n) {
    return n * (3 * n - 1) / 2;
}
int1 binary_search(int1 (*func)(int1), int1 n, int1 x) {
    int1 h = 1, t = n, mid;
    while(h <= t) {
        mid = (h + t) >> 1;
        if(func(mid) == x) return mid;
        if(func(mid) < x) h = mid + 1;
        else t = mid - 1;
    }
    return 0;
}
int main() {
    int1 n = 2, pk, pj;
    int1 D = INT32_MAX;
    while(pentagonal(n) - pentagonal(n - 1) < D) {
        pk = pentagonal(n);
        for(int j = n - 1; j >= 1; j--) {
            pj = pentagonal(j);
           if(  pk - pj >= D) break;
            int1 ind1 = binary_search(pentagonal, 2 * n,pk + pj);
            int1 ind2 = binary_search(pentagonal, n, pk - pj);
            if(ind1 && ind2) {
                D = pk - pj;
            }
        }
        n++;
    }
    printf("%lld\n",D);
    return 0;
}
