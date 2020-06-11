/*****
      one.c
      確認課題No.5 2017.6.07値の範囲での条件分岐
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int xNum;
    int yNum;
        
    printf("数字1:");
    scanf("%d", &xNum);

    printf("数字2:");
    scanf("%d", &yNum);

    if(xNum == yNum){
        if(xNum == 1)
        printf("one!\n");
    }
    
    return 0;
}
    
