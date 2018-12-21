/*****
      sum.c
      確認課題No.3 2017.6.21
    　2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int num,sum;

    printf ("数字の合計を求める(0を入力で計算)\n");

    for (sum = 0; ;sum = sum + num){
        scanf ("%d", &num);
        if (num == 0) break;
    }

    printf ("合計:%d\n", sum);
    
    return 0;
}
