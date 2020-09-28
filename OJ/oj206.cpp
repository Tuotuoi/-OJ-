/*************************************************************************
	> File Name: oj205.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 00时10分24秒
 ************************************************************************/

#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
    double high[35][35];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> high[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        double ave = 0;
        for(int j = 0; j < n; j++) {
            ave += high[j][i];
        }
        cout << ave;
        if(i < n) printf("\n");
    }
    return 0;
}
