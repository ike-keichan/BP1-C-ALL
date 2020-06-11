/*****
      sign.c
      値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;

    printf("入力した数字の符号を判断");
    printf("数字を入力:");
    scanf("%d", &number);

    if(number >= 1)  printf("プラス\n");
    if(number == 0)  printf("ゼロ\n");
    if(number <= -1) printf("マイナス\n");

    return 0;
}
    
