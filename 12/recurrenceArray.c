/*****
      recurrenceArray.c
      確認課題No.4 2017.6.28
    　2017.6.21 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){
    
    int aNum[15] = {1};
    int count;
    int i;

    for(i = 0; i <= 13; i++){
        aNum[i+1] = aNum[i] * 3 + 2;
    }

    for(; i >= 0; i--){
        printf("%d\n",aNum[i]);
    }

        
    return 0;
}
