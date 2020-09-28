/*************************************************************************
	> File Name: oj243.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月30日 星期六 13时17分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 200000
struct node {
    long long s, e, d;
} a[MAX_N + 5];


long long cnt(long long pos, long long n) {
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        if (a[i].s > pos) continue;
        if (a[i].e <= pos) {
            sum += (a[i].e - a[i].s) / a[i].d + 1;
            continue;
        } 
        sum += (pos - a[i].s) / a[i].d + 1;
    }
    return sum;
}

long long check(long long pos, long long n) {
    return cnt(pos, n) % 2;
}

long long bs(long long l, long long r, long long n) {
        if (l == r) return l;
        long long mid = (l + r) >> 1;
        if (check(mid, n)) return bs(l, mid, n);
        return bs(mid + 1, r, n);
}

void solve() {
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].e >> a[i].d;
    }
    long long l ,r;
    for (long long i = 0; i < n; i++) {
        l = min(l, a[i].s);
        r = max(r, a[i].e);
    }
    long long pos = bs(l, r, n);
    long long count = cnt(pos, n) - cnt(pos - 1, n);
    if (count % 2 == 1) {
        cout << pos << " " << count << endl;
    } else {
        cout << "Poor QIN Teng:(" << endl;
    }
    return;

}


int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
