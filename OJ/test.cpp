/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 16时36分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
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
        for (int j = i - 1; j >= 0; j--) {
            if (a[i] + a[j] > w || check[i] == 1 || check[j] == 1) continue;
            check[i] = 1;
            check[j] = 1;
            ans++;
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        if(check[i] == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}
