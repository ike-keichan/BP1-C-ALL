/*****
      grid.c
      提出課題No2 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    int number;  //線の本数指定
    int Num;     //線の間隔
    int xlL;     //縦線x座標
    int ysL;     //横線y座標
    int count;   //回数を数える

    printf ("数字を入力:");
    scanf ("%d", &number);

    Num = 600 / number;
        
    HgOpen (600, 600);

    for (count = 0; count <= number; xlL = ysL = Num * count){
        HgLine (xlL, 0, xlL, 600 );
        HgLine (0, ysL, 600, ysL );
        count = count + 1;
            }

    HgGetChar();
    HgClose();
            
    return 0;
}
