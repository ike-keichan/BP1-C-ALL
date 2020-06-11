/*****
      concentric.c
      確認課題No.9 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int rNum;
    
    HgOpen (600, 600);

    for ( rNum = 50; rNum <= 250; rNum = rNum + 50){
        HgCircle (300, 300, rNum);
            }

    HgGetChar();
    HgClose();
            
    return 0;
}
