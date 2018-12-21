/*****
      concentricColor.c
      確認課題No.2 2017.6.21
      2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int rNum, count;
    
    HgOpen (600, 600);

    for ( rNum = 50, count = 1; rNum <= 250; rNum = rNum + 50, count = count + 1){
        if (count % 2 == 1){
            HgSetColor (HG_BLUE);
            HgCircle (300, 300, rNum);
        }
        if (count % 2 == 0){
            HgSetColor (HG_RED);
            HgCircle (300, 300, rNum);
        }
    }

    HgGetChar();
    HgClose();
            
    return 0;
}
