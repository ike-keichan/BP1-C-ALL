/*****
      fourCircles.c
      kadai No.2
      2017.5.17 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#include <handy.h>

int main(){

    HgOpen(400,400);

    HgSetFillColor(HG_RED);
    HgCircleFill(120,120,100,0); //1st square

    HgSetFillColor(HG_YELLOW);
    HgCircleFill(280,120,100,0); //2nd square

    HgSetFillColor(HG_BLUE);
    HgCircleFill(120,280,100,0); //3rd square

    HgSetFillColor(HG_GREEN);
    HgCircleFill(280,280,100,0); //4th square

    HgGetChar();
    HgClose();

    return 0;
}
