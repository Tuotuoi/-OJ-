/*************************************************************************
	> File Name: oj540.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月25日 星期三 18时39分08秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
    int n, cost, num[45],set[2][2100000],cnt[2];

void func(int set_num, int start, int end , int sum) {
    if (sum > cost)return ;
    for(int i = start; i < end; i++) {
        sum += num[i];
        set[set_num][cnt[set_num]] = sum;
        cnt[set_num] ++;
        func(set_num, i+1,end,sum) ;
        sum -= num[i];
    }
}
int main() {
    while(cin >> n >> cost) {
        cnt[0] = cnt[1] = 0;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        func(0,0,n / 2, 0);
        func(1,n / 2, n, 0);
        sort(set[1],set[1] + cnt[1]);
        for(int i = 0;i < cnt[0];i++ ) {
            int tar = cost - set[0][i];
            int l = 0,r = cnt[1] - 1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if (set[1][mid] == tar) {
                    cout << "YES"<< endl;
                    flag = 1;
                    break;
                }
                if(set[1][mid] < tar) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            if (flag == 1) break;
            if (flag == 0) {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
