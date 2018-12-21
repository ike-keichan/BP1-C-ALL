/*****
      fibonacchi.c
      確認課題No.5 2017.6.28
    　2017.6.21 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){
    
    int aNum[20] = {1, 1};
    int count;
    int i;

    for( i=0; i<=19; i++){
        aNum[i+2] = aNum[i] + aNum[i+1];
        printf("%d\n", aNum[i]);
    }

        
    return 0;
}
