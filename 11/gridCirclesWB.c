/*****
      gridCirclesWB.c 
      確認課題No.10 2017.6.21
      2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int num, xcount, ycount, rNum;

    printf ("回数を入力してください:");
    scanf ("%d", &num);

    rNum = 480 / (2 * num);

    HgOpen (480, 480);

    for (xcount = 0; xcount<num ; xcount++) {
        for (ycount = 0; ycount < num; ycount++) {
            if ( xcount % 2 == 1){
                HgSetFillColor(HG_BLACK);
                HgCircleFill ( rNum + 2 * rNum * xcount, rNum + 2 * rNum * ycount, rNum, 0);
            }
            else {
                HgCircle ( rNum + 2 * rNum * xcount, rNum + 2 * rNum * ycount, rNum);
            }
        }
    }

    HgGetChar();
    HgClose();

    return 0;
}

    
    
