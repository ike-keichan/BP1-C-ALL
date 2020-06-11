/*****
      ksu.c 
      確認課題No.8 2017.6.21
      2017.6.07 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int num, xcount, ycount;

    printf ("回数を入力してください:");
    scanf ("%d", &num);

    for (xcount = 0; xcount<num ; xcount++) {
        for (ycount = 0; ycount < num; ycount++){
            printf("KSU ");
        }
        printf("\n");
    }
    

    return 0;
}

    
    
