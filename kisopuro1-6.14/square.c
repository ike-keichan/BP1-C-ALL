/*****
      musoubana.c
      確認課題No.3 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int numberA;
    int numberB;

    printf("数字を入力:");
    scanf("%d", &numberA);

    if(numberA > 0){
        numberB = numberA / numberA;
        do {
            printf("%d*%d=%d\n", numberB, numberB, numberB*numberB);
            numberB = numberB + 1;
        }while (numberB <= numberA);
    }
    
    return 0;
}
