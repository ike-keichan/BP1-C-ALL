/*****
      reidai2017.7.05.c
      例題 2017.7.05
      2017.6.28 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    int xNum; //中心座標x

    HgOpen(400, 400);

    for(xNum=0; xNum<=400; xNum+=5){
        HgClear();
        HgCircle(xNum, 200, 50);
        HgSleep(0.05);
    }
    for(xNum=400; 0<=xNum; xNum-=5){
        HgClear();
        HgCircle(xNum, 200, 50);
        HgSleep(0.05);
    }

    HgGetChar();
    HgClose();
    return 0;
}  
