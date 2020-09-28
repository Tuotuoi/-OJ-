/*************************************************************************
	> File Name: 571.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月30日 星期六 12时44分00秒
 ************************************************************************/

#include<iostream>
#include <queue>
#define MAX_N 100
using namespace std;
struct node {
    int now, step;
};

int n, x, y, num[MAX_N + 5][MAX_N + 5], check[MAX_N + 5];

int main() {
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }

    queue<node> que;
    que.push({x, 0});
    check[x] = 1;
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        if (temp.now == y) {
            cout << temp.step - 1 << endl;
            return 0;
        }
        for (int i = 1; i <= n; i++) {
            if (check[i] != 1 && num[temp.now][i] == 1) {
                que.push({i, temp.step + 1});
                check[i] = 1;
            }
        }
    }
    return 0;
}

