/*************************************************************************
	> File Name: ep09.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月26日 星期四 18时06分34秒
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}
int main() {
    int ans = 0;
    for(int n = 1; n <= 33; n++) {
        for(int m = n + 1; m * m + n * n < 1000; m++) {
            if(gcd(m , n) - 1) continue;
            int a = 2 *m *n;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if(1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = k * a * k * b * k * c;
            }
            if(ans) break;
        }
        if(ans) break;
    }
    printf("%d\n",ans);
    return 0;
}
