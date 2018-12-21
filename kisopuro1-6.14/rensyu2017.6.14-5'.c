/*****
      rensyu2017.6.14-5'.c
      練習No.5' 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int numberA;
    int numberB;
    int answer;

    printf("数字を入力:");
    scanf("%d", &numberA);

    answer = 1;

    for (numberB = 1; numberB <=numberA; numberB = numberB + 1){
            if (numberA >= 0){
                answer = answer *  numberB;
            }
        }
             
        printf("%d!=%d\n", numberA, answer);
    
    
    
    return 0;
}
