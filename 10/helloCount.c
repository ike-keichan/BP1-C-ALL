/*****
      helloCount.c
      確認課題No.1 2017,6,14
      2017,5,31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number = 0 ;  //回数を数える

    while (number < 7){
        number = number + 1;
        printf("Hello World %d回目\n", number);
        
    }

    return 0;
}
