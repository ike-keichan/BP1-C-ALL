/*****
      rensyu2017.5.31-1.c
      練習No.1 2017.5.31
　　　2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main() {

    int xNum;  //数字x
    int yNum;  //数字y
    
    printf("数字1:");
    scanf("%d", &xNum );
    printf("数字2:");
    scanf("%d", &yNum );
    printf("%d+%d=%d\n", xNum , yNum , xNum+yNum );
    printf("%d-%d=%d\n", xNum , yNum , xNum-yNum );
    printf("%d*%d=%d\n", xNum , yNum , xNum*yNum );
    printf("%d/%d=%d..%d\n", xNum , yNum , xNum/yNum , xNum%yNum );

    return 0;
}
    
