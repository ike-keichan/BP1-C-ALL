/*****
      rensyu2017.5.24-2.c
      scanfで値を読み取る
      2017.5.19 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){
    int value;  //入力値を格納するための変数
    printf("input number: ");  //入力を促すメッセージ
    scanf("%d", &value);  //標準入力から整数値を読み取る
    printf("%d\n", value);  //入力された値をそのまま表示してみる

    return 0;
}
