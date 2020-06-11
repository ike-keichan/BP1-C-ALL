/*****
      pyramid.c 
      提出課題No.2 2017.6.21
      2017.6.14 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int num, xcount, ycount, rNum, perfectNum;

    printf ("回数を入力してください:");
    scanf ("%d", &num);

    rNum = 600 / (2 * num);
    perfectNum = num;

    HgOpen (600, 600);

    for (xcount = 0; xcount <  perfectNum ; xcount++, num--) {
        for (ycount = 0; ycount < num; ycount++){
            HgCircle ( rNum + 2 * rNum * xcount, rNum + 2 * rNum * ycount, rNum);
        }
    }

    HgGetChar();
    HgClose();

    return 0;
}

    
    
