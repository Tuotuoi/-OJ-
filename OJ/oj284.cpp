/*************************************************************************
	> File Name: oj284.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月30日 星期六 12时21分09秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <set>
using namespace std;
#define MAX_N 10000
struct Data {
    int d, p;
} a[MAX_N + 5];

typedef pair<int,int> PII;
set<PII> s;

bool cmp(const Data &a, const Data &b) {
    return a.d < b.d;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <n; i++) {
        cin >> a[i].p >> a[i].d;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        if (s.size() < a[i].d) {
            s.insert(PII(a[i].p, i));
        }
        else if (s.begin()->first < a[i].p) {
            s.erase(s.begin());
            s.insert(PII(a[i].p, i));
        }
    }
    int ans = 0;
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        ans += iter->first;
    }
    cout << ans << endl;

    return 0;
}
