/*****
      twoDigits.c
      値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;

    printf("入力した数字が2桁かを判断\n");
    printf("数字を入力:");
    scanf("%d", &number);

    if(number >= 10){
        if(number < 100) printf("2桁の値\n");
    }
    

    return 0;
}
    
