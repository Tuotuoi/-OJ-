/*************************************************************************
	> File Name: oj148.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 20时27分37秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char a[100];
    cin >> a;
    int d = strlen(a);
    for(int i = d - 1; i >= 0; i--) {
        cout << a[i];
    }
    return 0;
}
