/*************************************************************************
	> File Name: oj264.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月28日 星期二 20时46分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define int1 long long
#define MAX_N 100000
int1 a[MAX_N + 5];
int1 s[MAX_N + 5] , top = -1;
int1 l[MAX_N + 5], r[MAX_N + 5];

int main() {
    int1 n;
    cin >> n;
    for (int1 i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[0] = a[n + 1] = -1;
    s[top = 0] = 0;
    for (int i = 1; i <= n; i++) {
        while (a[s[top]] >= a[i]) --top;
        l[i] = s[top];
        s[++top] = i;
    }
    s[top = 0] = n + 1;
    for ( int i = n; i >= 1; i--) {
        while (a[s[top]] >= a[i]) --top;
        r[i] = s[top];
        s[++top] = i;
    }
    int1 ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans,a[i] * (r[i] - l[i] - 1));
    }
    cout << ans << endl;
    return 0;
}
