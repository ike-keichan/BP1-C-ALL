/*****
      handy.c
      A simple sample of Handy Graphic
      2017.5.10 Keisuke Ikeda
*****/


#include <stdio.h>
#include <handy.h>


int main() {
    HgOpen(600, 400);
    HgCircle(300,150, 120);
    HgGetChar();
    HgClose();
    return 0;
}
