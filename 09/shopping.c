/*****
      shopping.c
      提出課題No.1 2017.6.7
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int hand; //手持ちの金額
    int val;  //値段
    int ind;  //個数
    int rest; //お釣り
    int buy; //購入可能数x

    printf("手持ちの金額:");
    scanf("%d", &hand);
    printf("単価:");
    scanf("%d", &val);
    printf("個数:");
    scanf("%d", &ind);

    rest = hand - (val * ind);
    buy = hand / val;

    if( rest >= 0) printf("買える。お釣りは%d円。\n", rest);
    else printf("買えない。%d個なら買える。\n", buy);

    return 0;
}
