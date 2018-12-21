/*****
      rensyu2017.6.14-5'.c
      練習No.4' 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int numberA;
    int numberB;
    int sum;

    printf("数字を入力:");
    scanf("%d", &numberA);
    for(sum = 0, numberB = 1;numberB <= numberA; numberB = numberB + 1){
        if(numberA > 0){
            sum= sum + numberB;
        }}printf("sum=%d\n", sum);
    
    return 0;
}
