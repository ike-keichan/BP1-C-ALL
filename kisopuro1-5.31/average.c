/*****
      average.c
      確認課題No.2 2017.5.31
　　　2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main() {

    int xNum;  //数字x
    int yNum;  //数字y
    int zNum;  //数字z
    
    printf("数字1:");
    scanf("%d", &xNum );
    
    printf("数字2:");
    scanf("%d", &yNum );

    printf("数字3:");
    scanf("%d", &zNum );
    
    printf("average=%d\n", (xNum+yNum+zNum)/3 );

    return 0;
}
    
