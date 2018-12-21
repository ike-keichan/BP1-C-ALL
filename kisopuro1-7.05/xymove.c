/*****
      xymove.c
      確認課題No.2 2017.7.05
      2017.6.28 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    int xyNum; //中心座標

    HgOpen(400, 400);

    for(xyNum=0; xyNum<=400; xyNum+=5){
        HgClear();
        HgCircle(xyNum, xyNum, 50);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}  
