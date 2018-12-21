/*****
      calcCircles.c
      提出課題No.1 2017.5.24
      2017.5.19 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int xMinC;  //小円の中心座標x
    int rMinC;  //小円の半径
    int xMedC;  //中円の中心座標x
    int rMedC;  //中円の半径

    rMinC=240/6;
    rMedC=240/3;
    xMinC=240+rMedC;
    xMedC=240-rMinC;
        
    HgOpen(400,400);
    HgCircle(240,210,120);
    HgCircle(xMinC,210,rMinC);
    HgCircle(xMedC,210,rMedC);
    HgGetChar();
    HgClose();

    return 0;
}
