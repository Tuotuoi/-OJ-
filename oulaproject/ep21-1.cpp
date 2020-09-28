/*************************************************************************
	> File Name: ep21-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年12月29日 星期日 18时30分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000
int f[max_n + 5] = {0};
void init() {
    for(int i = 2; i <= max_n; i++) {
        for(int j = 1; j * j <= i; j++) {
            if(i % j) continue;
            f[i] += j;
            f[i] += i / j;
        }
        f[i] -= i;
    }
    return ;
}

int main() {
    init();
    long long sum = 0;
    for(int i = 2; i <= max_n; i++) {
        if(f[i] != i && f[i] < max_n && i == f[f[i]]) sum += i;
    }
    cout << sum << endl;
    return 0;
}
