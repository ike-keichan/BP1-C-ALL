/*****
      factorial.c
      確認課題No.5 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int numberA;
    int numberB;
    int answer;

    printf("数字を入力:");
    scanf("%d", &numberA);

    numberB = numberA / numberA;
    answer = 1;

    if (numberA >= 0){
        do {
            answer = answer *  numberB;
            numberB = numberB + 1;
        }while (numberB <= numberA);

        printf("%d!=%d\n", numberA, answer);
    }
    
    
    return 0;
}
