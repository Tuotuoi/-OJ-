/*************************************************************************
	> File Name: oj637.cpp
	> Author: LuoJinXv 
	> Mail: m18999624868_1@163.com 
	> Created Time: 2020年07月29日 星期三 16时19分30秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <string>

using namespace std;

struct edge{
    int to, next;
};

edge edg[10000];
int n, m, edg_cnt, head[30], in_degree[30];
char ans[30];
int ans_cnt;
int check() {
    ans_cnt = 0;
    queue<int> que;
    int temp_in[30];
    for (int i = 1; i <= n; i++) {
        temp_in[i] = in_degree[i];
        if (temp_in[i] == 0) {
            que.push(i);
        }
    }
    int f1 = que.size() ,f2 = 0; // 起点的点的输入如果不为1，说明答案不确定
    while (!que.empty()) {
        int t = que.front();
        int f3 = 0;
        que.pop();

        ans[++ans_cnt] = t + 'A' - 1;
        for (int i = head[t]; i != -1; i = edg[i].next) {
            int e = edg[i].to;
            temp_in[e]--;
            if (temp_in[e] == 0) {
                if (f3 == 0) {
                    f3 = 1; //f3为2时说明答案不确定
                } else if (f3 == 1){
                    f3 = 2;
                }
                que.push(e);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (temp_in[i] != 0) {
            return 1;
        }
    }
    if (f1 != 1 || f2 == 2) {
        return 0;
    } 
   return 2; 

}
void insert_edg(int a, int b, int x) {
    edg[x].to = b;
    edg[x].next = head[a];
    head[a] = x;
    edg_cnt = x + 1;
    in_degree[b]++;
}

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        char a, b;
        cin >> a >> b >> b;
        insert_edg(a - 'A' + 1, b - 'A' + 1, i);
        int t = check();
        if (t == 1) {
            cout << "Inconsistency found after " << i + 1 << " relations." << endl;
            break;
        } else if(t == 2){
            cout << "Sorted sequence determined after " << i + 1 << " relations: ";
            for (int i = 1; i <= ans_cnt; i++) {
                cout << ans[i];
            }
            cout << "." << endl;
            return 0;
        }
    }
    cout << "Sorted sequence cannot be determined." << endl;

    return 0;
}
