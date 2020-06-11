/*****
      average.c
      確認課題No.4 2017.6.21
    　2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int num, sum, count;

    printf ("数字の平均を求める(0を入力で計算)\n");

    for (sum = 0, count = 0; ;sum = sum + num, count++){
        scanf ("%d", &num);
        if (num == 0) break;
    }

    printf ("平均:%d\n", sum / count);
    
    return 0;
}
