/*****
      max.c
      提出課題No1 2017.6.28
      2017.6.21 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int Num[100];
    int max, num, count;

    printf("デ-タの個数を指定:");
    scanf("%d", &num);

    for(count=0; count<num; count++){
        printf("%d番目の数字:", count+1);
        scanf("%d", &Num[count]);
        if(Num[count]>Num[count-1]){
            max=Num[count];
        }}
        printf("最大の数字は%dです。\n", max);
    
    return 0;
}
