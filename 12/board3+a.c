/*****
      board3+a.c
      提出課題No.1 2017.6.28
    　2017.6.21 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    
    int cell[9][9];
    int i, j, xlL, ysL,count;

    HgOpen(540,540);

    for( count=0; count<=9; xlL=ysL=60*count){
        HgLine (xlL, 0, xlL, 540);
        HgLine (0, ysL, 540, ysL);
        count = count + 1;
    }
    
    for( i=0; i<9; i++){
        for( j=0; j<9; j++){
            if(i == j){
                HgSetFillColor(HG_BLACK);
                HgCircleFill( 30+60*(8-i), 30+60*j, 25, 1);
            }else if( i+j == 8){
                HgSetFillColor(HG_BLACK);
                HgCircleFill( 30+60*(8-i), 30+60*j, 25, 1);
            }else if( (i+j)%2 == 0){                
                HgCircle( 30+60*(8-i), 30+60*j, 25);
            }
        }
    }
    HgGetChar();
    HgClose();

        
    return 0;
}
