/*****
      accelerate.c
      確認課題No.4 2017.7.05
      2017.6.28 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    int yNum; //中心座標
    int ac; //加速度

    HgOpen(400, 400);

    for(;;){
        for(yNum=400, ac=0; -100<=yNum; yNum-=ac, ac+=2){
            HgClear();
            HgCircle(200, yNum, 50);
            HgSleep(0.05);
        }
    }
    HgGetChar();
    HgClose();
    return 0;
}  
