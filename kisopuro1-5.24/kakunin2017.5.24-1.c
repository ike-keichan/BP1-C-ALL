/*****
      kakunin2017.5.24-1.c
      kakuninkadai No.1
      2017.5.17 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int xCen;  //x方向の円の中心
    int yCen;  //y方向の円の中心
    int xBox;  //x方向の正方形の左下隅の座標
    int yBox;  //y方向の正方形の左下隅の座標

    xCen= 600 / 2;
    yCen= 400 / 2;
    xBox= (600 - 300) / 2;
    yBox= (400 - 300) / 2;

    HgOpen(600,400);

    HgSetFillColor(HG_BLUE);
    HgBoxFill(xBox,yBox,300,300,0);

    HgSetFillColor(HG_YELLOW);
    HgCircleFill(xCen,yCen,150,0);

    HgGetChar();
    HgClose();

    return 0;
}

