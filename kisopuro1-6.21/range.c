/*****
      range.c
      確認課題No.5 2017.6.21
    　2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int max, min, num;

    printf ("範囲内である限り入力を繰り返させます\n");
    printf ("最大値:");
    scanf ("%d", &max);
    printf ("最小値:");
    scanf ("%d", &min);

    num = max - 1;

    for (; num < max && min < num ;){
        printf ("判定値:");
        scanf ("%d", &num);
    }

    printf ("範囲外です\n");
    
    return 0;
}
