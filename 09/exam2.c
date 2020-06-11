/*****
      exam2.c
      確認課題No.6 2017.6.07値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;

    printf("成績を判断\n");
    printf("点数を入力:");
    scanf("%d", &number);

    if(number >= 90){
        if(number <= 100) printf("秀\n");
    }

    else if(number >= 80) printf("優\n");
    else if(number >= 70) printf("良\n");
    else if(number >= 60) printf("可\n");
    else printf("不可\n");

    return 0;
}
    
