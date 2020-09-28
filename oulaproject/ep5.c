/*************************************************************************
	> File Name: ep5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 18时23分16秒
 ************************************************************************/

#include<stdio.h>
int gcd(int n , int m){
    int temp;
    if (m==0)
        return n;
    else if(n==0)
        return m;
    else if (m <= n && (m != 0 && n != 0)) {
        temp=n%m;
        n=m;
        m=temp;
        return gcd(m, n); 
}
}
int main(){
    int ans = 1;
    for(int i = 1;i<=20;i++){
        if(ans % i == 0) continue;
        ans *= i/gcd(ans,i);
    }
    printf("%d\n",ans);
    return 0;
}
