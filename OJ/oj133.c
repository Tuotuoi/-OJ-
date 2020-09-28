/*************************************************************************
	> File Name: oj133.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 19时46分42秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i , j , k=n ,s;
    for(i=1;i<=n;i++)
    {
        s=i;
        for( j=1; j<=k; j++)
        {
            printf("%d*%d=%d",i,s,i*s);
            if(j < k)
                printf("\t");
            s++;
        }
        if(i < n)
            printf("\n");
        k--;
    }

    return 0;
}
