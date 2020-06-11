/*****
      height3.c
      確認課題No.3 2017.6.28
      2017.6.14 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>
#define Num 54400

int main () {

    int number[Num] = {163, 157, 176, 180, 166};
    int i;

    do{
        printf("番号?:");
        scanf("%d", &i);
    }while(i<54400 || 54404<i);
    printf("%d番の身長は%dcmです。\n", i, number[i-54400]);
    
    return 0;
}
