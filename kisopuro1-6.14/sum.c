/*****
      sum.c
      確認課題No.4 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int numberA;
    int numberB;
    int sum;

    printf("数字を入力:");
    scanf("%d", &numberA);

    if(numberA > 0){
        sum = 0;
        numberB = numberA / numberA;
        do {
            sum = sum + numberB;
            numberB = numberB + 1;
        }while (numberB <= numberA);

        printf("sum=%d\n", sum);
    }
    
    return 0;
}
