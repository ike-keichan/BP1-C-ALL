/*****
      scanfCircle.c
      確認課題No.3 2017.5.31
　　　2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main() {

    int xNum;  //数字x
    int yNum;  //数字y
    int rNum;  //数字z
    
    printf("中心のx座標:");
    scanf("%d", &xNum );
    
    printf("中心のy座標:");
    scanf("%d", &yNum );

    printf("半径r:");
    scanf("%d", &rNum );
    
    HgOpen(400, 400);
    HgCircle(xNum, yNum, rNum);

    HgGetChar();
    HgClose();

    return 0;
}
    
