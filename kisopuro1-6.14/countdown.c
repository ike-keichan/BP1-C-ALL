.//*****
      countdown.c
      確認課題No.6 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;
    int answer;

    printf("数字を入力:");
    scanf("%d", &number);

    for (; number > 0; number = number - 1){
            if (number > 0){
                printf ("%d\n", number);
            }}
            
    return 0;
}
