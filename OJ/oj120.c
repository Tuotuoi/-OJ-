/*************************************************************************
	> File Name: oj113.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 19时53分20秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int y ,m, d;
    scanf("%d%d%d",&y,&m,&d);
    switch(m) {
        case 1 : if (d <= 31)printf("YES"); else printf("NO");break;
        case 2 : if( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0) ) if(d <= 29)printf("YES");else printf("NO");else if(d <= 28)printf("YES"); else printf("NO");break;
        case 3 : if (d <= 31)printf("YES"); else printf("NO");break;
        case 4 : if (d <= 30)printf("YES"); else printf("NO");break;
        case 5 : if (d <= 31)printf("YES"); else printf("NO");break;
        case 6 : if (d <= 30)printf("YES"); else printf("NO");break;
        case 7 : if (d <= 31)printf("YES"); else printf("NO");break;
        case 8 : if (d <= 31)printf("YES"); else printf("NO");break;
        case 9 : if (d <= 30)printf("YES"); else printf("NO");break;
        case 10 : if (d <= 31)printf("YES"); else printf("NO");break;
        case 11 : if (d <= 30)printf("YES"); else printf("NO");break;
        case 12 : if (d <= 31)printf("YES"); else printf("NO");break;
        default : printf("NO");

    }
    return 0;
}
