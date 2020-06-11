/*****
      checkArea.c 
      提出課題No.1 2017.6.21
      2017.6.14 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int  xNum, yNum;

    printf ("中心座標x:");
    scanf ("%d", &xNum);
    printf ("中心座標y:");
    scanf ("%d", &yNum);

    HgOpen (600, 400);
    HgBox (150, 100, 300, 200);

    if ((150 < xNum && xNum < 450) && (100 < yNum && yNum < 300)){
        HgSetFillColor (HG_RED);
        HgCircleFill (xNum, yNum, 50, 0);
    }else {
        HgSetFillColor (HG_BLUE);
        HgCircleFill (xNum, yNum, 50, 0);
    }

    HgGetChar();
    HgClose();

    return 0;
}

    
    
