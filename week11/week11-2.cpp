///week11-2.cpp
///為了解決SOIT107_ADVANCE_009這題
#include <stdio.h>

int main()
{
    printf("請輸入1個數(ex. 183) ");
    int n;
    scanf("%d", &n);///讀入n
    int ans = 0;///想找最大
    while(n>0){///while迴圈,一直剝皮
        if(n%10 > ans) ans = n%10;///更大的皮,更新答案
        printf("剝皮 %d\n",n%10);
        n = n/10;///剝完皮,n變少

    }
    printf("最大的皮是 %d\n",ans);
}
