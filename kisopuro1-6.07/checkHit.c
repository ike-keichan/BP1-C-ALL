/*****
      checkHit.c
      確認課題No.7 2017.6.07値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int xNum;  
    int yNum;  
    int rNum;  
    int joken1; 
    int joken2; 

    printf("円2の中心座標x:");
    scanf("%d", &xNum);
    
    printf("円2の中心座標y:");
    scanf("%d", &yNum);
    
    printf("円2の半径r:");
    scanf("%d", &rNum);

    HgOpen(400, 400);
    HgCircle(200, 200, 150);

    joken1 = (150 + rNum) * (150 + rNum);
    joken2 = (xNum - 200) * (xNum - 200) + (yNum - 200) * (yNum - 200);
    

    if(joken1 >= joken2){
        HgSetFillColor(HG_RED);
        HgCircleFill( xNum, yNum, rNum, 1);
    }

    if(joken1 <= joken2){
        HgSetFillColor(HG_BLUE);
        HgCircleFill( xNum, yNum, rNum, 1);
    }

    HgGetChar();
    HgClose();
                      
    return 0;
}
    
