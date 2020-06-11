/*****

    widthAndColor.c
    test of line width and color
    2017.5.17 Keisuke Ikeda
*****/


#include <stdio.h>
#include <handy.h>

int main() {
    HgOpen(600,400);

    HgSetColor(HG_RED);
    HgBox(10,150,100,100); //the left side square

    HgSetWidth(4);
    HgBox(130,150,100,100); //2nd square
    
    HgSetColor(HG_BLUE);
    HgSetFillColor(HG_BLUE);
    HgBoxFill(250,150,100,100,0); //3rd square

    HgSetWidth(1);
    HgBox(370,150,100,100); //4th suqare

    HgSetFillColor(HG_BLACK);
    HgBoxFill(490,150,100,100,0); //the right side square

    HgGetChar();
    HgClose();
    return 0;
}

