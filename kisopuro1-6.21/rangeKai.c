/*****
      rangeKai.c
      確認課題No.6 2017.6.21
    　2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int num, xran, yran;

    printf ("範囲内である限り入力を繰り返させます\n");
    printf ("範囲値1:");
    scanf ("%d", &xran);
    printf ("範囲値2:");
    scanf ("%d", &yran);

    if (xran < yran){
        num = yran - 1;
        for (; xran < num && num < yran;){
            printf ("判定値:");
            scanf ("%d", &num);
        }
    }

    if (yran < xran){
        num = xran - 1;
        for (; yran < num && num < xran;){
            printf ("判定値:");
            scanf ("%d", &num);
        }
    }
    printf ("範囲外です\n");
    
    return 0;
}
