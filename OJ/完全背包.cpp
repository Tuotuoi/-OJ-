/*************************************************************************
	> File Name: DTGH动态规划.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月22日 星期三 20时03分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int  n, all, w[10005], v[10005], ans[10005];

int main() {
    cin >> n >> all;
    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= all; j++) {
            if (j >= w[i]) {
                ans[j] = max(ans[j],ans[j - w[i]] + v[i]);
            } 
        }
    }
    cout << ans[all] << endl;

    return 0;
}
