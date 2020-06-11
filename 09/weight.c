/*****
      weight.c
      提出課題No.2 2017.6.7
      2017.5.24 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int avwei;  //標準体重
    int wei;    //体重
    int high;   //身長

    printf("体重を診断\n");
    printf("身長:");
    scanf("%d", &high);
    printf("体重:");
    scanf("%d", &wei);

    avwei = high - 105;

    if( avwei * 0.9 > wei ){
        printf("痩せすぎだよぉ\n");
    }
    else if( avwei * 1.1 < wei){
            printf("太りすぎだよぉ\n");
    }
    else printf("普通だよぉ\n");
    
    

    return 0;
}
