/*****
      absolute.c
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;

    printf("入力された数字の絶対値を表示");
    printf("数字を入力:");
    scanf("%d", &number);

    if(number >= 0)  printf("%d\n", number);
    if(number <= -1){
        number = -number;
        printf("%d\n", number);
    }

    return 0;
}
    
    
    
