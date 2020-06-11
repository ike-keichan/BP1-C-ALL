/*****
      boxes.c
      提出課題No.2 2017.5.31
　　　2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main() {

    int xNum;  //x0
    int yNum;  //y0
    int aNum;  //x1
    int bNum;  //y1
    int hxNum;
    int hyNum;
    
    printf("正方形の左下x座標 x0:");
    scanf("%d", &xNum );
    printf("正方形の左下y座標 y0:");
    scanf("%d", &yNum );
    printf("正方形の右上x座標 x1:");
    scanf("%d", &aNum );
    printf("正方形の右上y座標 y1:");
    scanf("%d", &bNum );

    hxNum = (aNum-xNum)/2;
    hyNum = (bNum-yNum)/2;
        
    HgOpen(600, 600);

    HgBox(xNum, yNum, hxNum*2, hyNum*2);
    HgBox(xNum-hxNum, yNum-hyNum, hxNum*4, hyNum*4);
    HgLine(xNum-hxNum, yNum+hyNum, xNum+hxNum, yNum-hyNum);
    HgLine(xNum-hxNum, yNum+hyNum, aNum-hxNum, bNum+hyNum);
    HgLine(aNum-hxNum, bNum+hyNum, aNum+hxNum, bNum-hyNum);
    HgLine(xNum+hxNum, yNum-hyNum, aNum+hxNum, bNum-hyNum);    
    
    HgGetChar();
    HgClose();

    return 0;
}
    
