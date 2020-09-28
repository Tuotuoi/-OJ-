/*************************************************************************
	> File Name: oj591.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月06日 星期三 20时32分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    if ((n % 2) == 0) {
        int mid = n / 2;
        if (m <= mid) cout << m + 1  << endl;
        else cout << m - 1 << endl;
    } else {
        int mid = (n + 1) / 2;
        if (m < mid) cout << m + 1 << endl;
        else cout << m - 1 << endl;
    }

    return 0;
}
