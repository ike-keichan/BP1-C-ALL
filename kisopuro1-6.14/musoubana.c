/*****
      musoubana.c
      確認課題No.2 2017.6.14 歌詞の復唱
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number = 0;  //回数を数える

    do {printf("とんで");
        number = number + 1;
    }while(number < 8);

    printf("とんで\n");
    number = 0;

    do {printf("まわって");
        number = number + 1;
    }while (number < 3);

    printf("まわる〜〜\n");
        
    
    return 0;
}
