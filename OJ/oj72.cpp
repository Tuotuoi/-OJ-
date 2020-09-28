/*************************************************************************
	> File Name: oj72.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月23日 星期六 10时12分12秒
 ************************************************************************/

#include<iostream>
#define MAX_N 1000
using namespace std;

int m, n, ans;
char mmap[MAX_N + 5][MAX_N + 5];
struct UnionSet {
    int fa[MAX_N * MAX_N];
    void init(int x) {
        for(int i = 0; i <= x; i++) {
            fa[i] = i;
        }
    }
    int get(int x) {
        return (fa[x] = (fa[x] - x) ? get(fa[x]) : x);
    }
    int merge(int a, int b) {
        return fa[get(a)] = get(b);
    }
};

UnionSet u;

inline int ind(int x, int y) {
    return (x * m) + y + 1;
}

int main() {
    cin >> n >> m;
    u.init(n * m);
    for (int i = 0; i < n; i++) cin >> mmap[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mmap[i][j] == 'X') continue;
            if (mmap[i - 1][j] == 'O') u.merge(ind(i, j), ind(i - 1, j));
            if (mmap[i][j - 1] == 'O') u.merge(ind(i, j), ind(i, j - 1));
            if (i == 0 || i == n - 1) u.merge(ind(i, j), u.get(0));
            if (j == 0 || j == m - 1) u.merge(ind(i, j), u.get(0));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mmap[i][j] == 'X') continue;
            if (u.get(ind(i, j)) == u.get(0)) continue;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
