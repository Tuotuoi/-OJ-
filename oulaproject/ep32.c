/*************************************************************************
	> File Name: ep32.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月22日 星期日 16时20分32秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 10000
int add_to_num(int *num, int n){
    while(n) {
        if(num[n % 10]) return 0;
        num[n % 10] += 1;
        n /= 10;
    }
    return 1;
}
int digits(int n) { //判断位数
    if(n == 0) return 1;
    return floor(log10(n)) + 1;
}
int is_val(int a , int b) {
    if(digits(a) + digits(b) + digits(a * b) - 9) return 0;
    int num[10] = {0};
    int flag = 1;
    num[0] = 1;
    flag = flag && add_to_num(num,a);
    flag = flag && add_to_num(num,b);
    flag = flag && add_to_num(num,a*b);
    return flag;
}
int keep[max_n + 5] = {0};
int main(){
    int sum = 0;
    for(int i = 1; i < 100; i++){
        for(int j = i + 1; j < 10000; j++ ) {
            if(!is_val(i,j)) continue;
            if(keep[i* j]) continue;
            sum += i * j;
            keep[i * j] = 1;
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
}
