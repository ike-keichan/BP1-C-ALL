/*****
      fruits.c
      確認課題N0.3 2017.6.07 値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number, judge;
        
    printf("数字を入力:");
    scanf("%d", &number);

    judge = number % 3;

    if(judge == 1) printf("apple\n");
    if(judge == 2) printf("orange\n");
    if(judge == 0) printf("banana\n");
    
    return 0;
}
    
