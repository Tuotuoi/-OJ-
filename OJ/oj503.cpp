/*************************************************************************
	> File Name: oj503.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 16时05分17秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_N 30000
int w,n,a[MAX_N + 5], check[MAX_N+5], ans;
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a + n);
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == 0) continue;
        for (int j  = i - 1; j >= 0; j--) {
            if (a[j] && a[i] + a[j] <= w) {
                a[j] = 0;
                break;
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
