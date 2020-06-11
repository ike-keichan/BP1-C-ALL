/*****
      plot.c
      確認課題No.8 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int xNum;
    int yNum;
        
    HgOpen (600, 400);

    for ( xNum= 0; xNum <= 600; xNum = xNum + 10){
        yNum = xNum / 2 + 30;
        HgCircle (xNum, yNum, 1);
            }

    HgGetChar();
    HgClose();
            
    return 0;
}
