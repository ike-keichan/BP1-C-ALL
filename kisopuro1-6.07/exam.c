/*****
      exam.c
      値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int number;

    printf("成績を判断\n");
    printf("点数を入力:");
    scanf("%d", &number);

    if(number >= 80){
        if(number <= 100) printf("優\n");
    }

    else if(number >= 60) printf("可\n");

    else printf("不可\n");
    

    return 0;
}
    
