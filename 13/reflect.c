/*****
      reflect.c
      確認課題No.3 2017.7.05
      2017.6.28 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    int xNum; //中心座標

    HgOpen(400, 400);
    xNum=0;

    for(;;){
        for(xNum=50; xNum<=350; xNum+=5){
            HgClear();
            HgCircle(xNum, 200, 50);
            HgSleep(0.05);
        }
        for(; 50<=xNum; xNum-=5){
            HgClear();
            HgCircle(xNum, 200, 50);
            HgSleep(0.05);
        }
    }
    HgGetChar();
    HgClose();
    return 0;
}  
