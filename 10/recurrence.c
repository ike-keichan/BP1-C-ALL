/*****
      recurrence.c
      提出課題No.1 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;
    int count;
    int aNum;

    do{
        printf("数字を入力:");
        scanf("%d", &number);
    }while (number < 0);

    aNum = 1;

    for ( count = 0; count < number; aNum = 3 * aNum + 2){
        printf("a%d = %d\n", count, aNum);
        count = count + 1;
    }
            
    return 0;
}
