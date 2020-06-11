/*****
      bound.c
      提出課題No.1 2017.7.05
      2017.7.05 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    int xNum=50, yNum=50; //中心座標
    int xAc=5, yAc=3; //加速度
    int xCo=0, yCo=0; //数を数える

    HgOpen(400, 400);

    for(;; xNum+=xAc, yNum+=yAc, xCo=xCo+xAc, yCo=yCo+yAc){
        if(xCo==300 && yCo==300){
            xAc = -5;
            yAc = -3;
        }else if(xCo==300 && yCo==0){
            xAc = -5;
            yAc = 3;
        }else if(xCo==0 && yCo==300){
            xAc = 5;
            yAc = -3;
        }else if(xCo==0 && yCo==0){
            xAc = 5;
            yAc =3;
        }else if(xCo==300){
            xAc = -5;
        }else if(yCo==300){
            yAc = -3;
        }else if(xCo==0){
            xAc = 5;
        }else if(yCo==0){
            yAc = 3;
        }
        HgClear();
        HgCircle(xNum, yNum, 50);
        HgSleep(0.05);
    }
    
    HgGetChar();
    HgClose();
    return 0;
}  
