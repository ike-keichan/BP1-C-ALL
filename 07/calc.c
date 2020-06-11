/*****
      calc.c
       提出課題No.2 2017.5.24
      入力された2つの整数の和、差、商、積を表示する
　　　2017.5.19 g1744069 Keisuke Ikeda
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
    printf("%d/%d=%d\n", xNum , yNum , xNum/yNum );

    return 0;
}
    
