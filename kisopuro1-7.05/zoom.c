/*****
      zoom.c
      確認課題No.1 2017.7.05
      2017.6.28 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    int rNum; //半径

    HgOpen(400, 400);

    for(rNum=0; rNum<=300; rNum+=5){
        HgClear();
        HgCircle(200, 200, rNum);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}  
