/*****
      height.c
      確認課題No.1 2017.6.28
      2017.6.14 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main () {

    int number[5] = {163, 157, 176, 180, 166};
    int i;

    printf("番号?:");
    scanf("%d", &i);
    printf("%d番の身長は%dcmです。\n", i, number[i]);
    
    return 0;
}
