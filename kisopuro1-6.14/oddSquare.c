/*****
      oddSquare.c
      確認課題No.7 2017.6.14
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;

    for ( number=1; number < 100; number = number + 2){
        printf ("%d\n", number*number);
    }
            
    return 0;
}
