/*****
      rensyu2017.5.31-3.c
      練習No.3 2017.5.31
　　　2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main() {

    int xNum;  //数字x
    int yNum;  //数字y
    int aNum;  //数字a
    int bNum;  //数字b
    
    printf("数字1:");
    scanf("%d", &xNum );
    printf("数字2:");
    scanf("%d", &yNum );
    printf("数字3:");
    scanf("%d", &aNum );
    printf("数字4:");
    scanf("%d", &bNum );

    printf("(%d+%d)*(%d/%d)=%d\n", xNum , yNum , aNum , bNum , (xNum+yNum)*(aNum/bNum) );
    printf("(%d+%d*%d)/%d=%d\n", xNum , yNum , aNum , bNum , (xNum+yNum*aNum)/bNum );
    printf("(%d+%d)/(%d*%d)=%d\n", xNum , yNum , bNum , aNum , (xNum+yNum)/(bNum*aNum) );
    
    return 0;
}
    
