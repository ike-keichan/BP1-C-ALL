/*****
      rensyu2017.6.14-3'.c
      練習No.3' 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int numberA;
    int numberB;

    printf("数字を入力:");
    scanf("%d", &numberA);

    for( numberB = 1; numberB <= numberA; numberB = numberB + 1){
        if(numberA > 0){
            printf("%d*%d=%d\n", numberB, numberB, numberB*numberB);
        }
    }
    
    return 0;
}
