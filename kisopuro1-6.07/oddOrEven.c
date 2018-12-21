/*****
      oddOrEven.c
      確認課題No.2 2017.6.07 値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number, judge;

    printf("偶数か奇数かを判断\n");
    printf("数字を入力:");
    scanf("%d", &number);

    judge = number % 2;

    if(judge == 1) printf("odd\n");
    if(judge == 0) printf("even\n");
    
    return 0;
}
    
